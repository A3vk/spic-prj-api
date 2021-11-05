#ifndef ENTRYPOINT_H_
#define ENTRYPOINT_H_

extern spic::Application* spic::CreateApplication();

int main(int argc, char** argv)
{
	auto app = spic::CreateApplication();
	app->Run();
	delete app;
}

#endif // ENTRYPOINT_H_