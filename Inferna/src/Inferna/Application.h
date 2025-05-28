#pragma once

#include "Core.h"

namespace Inferna {

	class INFERNA_API Application 
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}





