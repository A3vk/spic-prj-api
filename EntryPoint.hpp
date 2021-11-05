#ifndef ENTRYPOINT_H_
#define ENTRYPOINT_H_

#include "Application.hpp"

int main(int, char**)
{
	auto app = spic::CreateApplication();
	app->Run();
	delete app;
}

#endif // ENTRYPOINT_H_