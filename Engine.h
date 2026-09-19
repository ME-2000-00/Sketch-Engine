#pragma once
#include "LuaHandler.h"




namespace Sketch {
	inline bool running = true;
	inline Lua::LuaHandler luaHandler;



	class Engine
	{
		Engine();
		~Engine();

		// runns a game loop
		void run();

		// needs to be tick based 20ticks like minecraft
		void update();
		void render();







	};
}


