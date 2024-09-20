#include "../../header/Player/PlayerView.h"
#include "../../header/Global/Config.h";
#include "../../header/Global/ServiceLocator.h";
#include "../../header/Player/PlayerModel.h";

namespace Player
{
	using namespace Global;
	using namespace UI::UIElement;

	/*
	PlayerView::PlayerView()
	{
		game_window = nullptr;
		player_image = new ImageView();
	}
	*/

	PlayerView::PlayerView(PlayerController* controller)
	{
		game_window = nullptr;
		player_image = new ImageView();
	}

	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		//Yet to Implement
		game_window = Global::ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::update()
	{
		//Yet to implement
	}

	void PlayerView::render()
	{
		//Yet to implement
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}

	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}
}