#pragma once

#ifdef IN_PLATFORM_WINDOWS

extern Inferna::Application* Inferna::CreateApplication();


int main(int argc, char** argv) {


	auto app = Inferna::CreateApplication();
	app->Run();
	delete app;
}
#endif