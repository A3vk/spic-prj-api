#ifndef RESOURCES_H_
#define RESOURCES_H_

#include "Export.hpp"

#include "GameObject.hpp"
#include <memory>

#if __has_include("Resources_extra_includes.hpp")
	#include "Resources_extra_includes.hpp"
#endif

namespace spic {
	class DLL_EXPORT Resources {
	public:
		template<class T, std::enable_if_t<std::is_base_of_v<GameObject, T>>* = nullptr>
		static std::shared_ptr<T> CreateGameObject(const std::string& name);

		static std::vector<std::shared_ptr<GameObject>> GameObjects;
	};
#include "Resources_templates.hpp"
}

#endif // RESOURCES_H_