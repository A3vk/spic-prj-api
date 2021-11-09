#ifndef APPLICATION_H_
#define APPLICATION_H_

#if __has_include("Application_extra_includes.hpp")
	#include "Application_extra_includes.hpp"
#endif

namespace spic
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
		virtual void OnUpdate();

	protected:
	#include "Application_protected.hpp"
	};

	Application* CreateApplication();
}
#endif // APPLICATION_H_