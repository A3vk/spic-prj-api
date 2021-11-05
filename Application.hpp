#ifndef APPLICATION_H_
#define APPLICATION_H_

#include "Application_extra_includes.hpp"

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