#pragma once
#include "core.h"
namespace Hazel  {
	class HAZEL_API Application
	{
	public:
		Application();
		~Application();

		void Run();
	};

	//to be defined in  client
	Application* CreateApplication();

}