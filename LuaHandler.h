#pragma once
#include <lua.hpp>
#include <sol/sol.hpp>
#include <vector>




namespace Lua {

	class LuaHandler
	{
	private:
		sol::state lua{};
		// vector that stores all custom functions that are registered to lua, so they can be called from lua scripts
		//std::vector<

	public:
		LuaHandler();
	};









	inline void SketchTest() {
		printf("SketchTest");
	}
}