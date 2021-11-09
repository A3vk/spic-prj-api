#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "api/Application_extra_includes.hpp"
#include "CrossCompile.h"

namespace spic
{
	class DLL_EXPORT Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		virtual void OnUpdate();

	protected:
	#include "api/Application_protected.hpp"
    };

	Application* CreateApplication();
}
#endif // APPLICATION_H_