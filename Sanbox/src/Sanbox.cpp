#include <Inferna.h>

class Sandbox : public Inferna::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

Inferna::Application* Inferna::CreateApplication() {

	return new Sandbox();
}