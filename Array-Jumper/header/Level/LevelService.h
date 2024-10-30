#pragma once

#include "BlockType.h"

namespace Level
{
	class LevelController;

	class LevelService
	{
	private:
		LevelController* level_controller;

		void destroy();
	public:
		LevelService();
		~LevelService();

		void intialize();
		void update();
		void render();

		BlockType getCurrentBoxValue(int currentPosition);
	};
}