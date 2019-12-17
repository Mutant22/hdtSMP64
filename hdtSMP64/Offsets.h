#pragma once

#include <cstdint>

namespace hdt
{
	// signatures generated with IDA SigMaker plugin
	namespace offset
	{
		// hdtSkyrimPhysicsWorld.cpp
		// 74 35 45 33 C0 33 D2
		constexpr std::uintptr_t GameStepTimer_SlowTime = 0x02F6B948;

		// Hooks.cpp
		// E8 ? ? ? ? 48 8B E8 FF C7 
		constexpr std::uintptr_t ArmorAttachFunction = 0x001CAFB0;

		// Hooks.cpp
		// function responsible for majority of main game thread loop
		// E8 ? ? ? ? 84 DB 74 24 
		constexpr std::uintptr_t GameLoopFunction = 0x005B2FF0;
		// E8 ? ? ? ? E8 ? ? ? ? E8 ? ? ? ? 48 8B 0D ? ? ? ? 48 85 C9 74 0C E8 ? ? ? ? 
		constexpr std::uintptr_t GameShutdownFunction = 0x01293D20;
	}
}