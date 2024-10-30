#pragma once
#include "LevelModel.h"
#include "BlockType.h"

namespace Level
{
	class LevelView;
	class LevelModel;

	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();
		BlockType getCurrentBoxValue(int currentPosition);
	};
}