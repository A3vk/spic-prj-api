#ifndef GAMEOBJECTLIST_H_
#define GAMEOBJECTLIST_H_

#include "Export.hpp"

#include <memory>
#include <vector>
#include <string>
#include "Camera.hpp"
#include "GameObject.hpp"

#if __has_include("GameObjectList_extra_includes.hpp")
	#include "GameObjectList_extra_includes.hpp"
#endif

namespace spic {
	class DLL_EXPORT GameObjectList {
	public:
		GameObjectList();
		std::shared_ptr<Camera> GetActiveCamera();
		std::vector<std::shared_ptr<GameObject>> GetAll();
		std::vector<std::shared_ptr<GameObject>> GetActive();
		std::vector<std::shared_ptr<GameObject>> GetByTag(const std::string& tag);
		std::vector<std::shared_ptr<GameObject>> GetByName(const std::string& name);
		std::vector<std::shared_ptr<GameObject>> GetByLayer(const int layer);

		void Add(std::shared_ptr<GameObject>);

		template<class T>
		std::vector<std::shared_ptr<T>> GetByType();

	private:
	#if __has_include("GameObjectList_private.hpp")
		#include "GameObjectList_private.hpp"
	#endif

	};

	#if __has_include("GameObjectList_templates.hpp")
		#include "GameObjectList_templates.hpp"
	#endif
}

#endif // GAMEOBJECTLIST_H_