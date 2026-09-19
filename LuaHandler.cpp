#include "LuaHandler.h"



namespace Lua {

	LuaHandler::LuaHandler() {
		// lua init
		lua.open_libraries(sol::lib::base);

		lua.script_file("scripts/script.lua");

	}
}