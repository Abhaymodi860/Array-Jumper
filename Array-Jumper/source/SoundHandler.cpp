#include "../header/SoundHandler.h"

SoundHandler::SoundHandler() { }

void SoundHandler::initialize()
{
	loadBackgroundMusicFromFile();
	loadSoundFromFile();
}

void SoundHandler::loadBackgroundMusicFromFile()
{
	if (!background_music.openFromFile("assets/sounds/background_music.wav"))
	{
		printf("Error loading background music file");
	}
}

void SoundHandler::loadSoundFromFile()
{
	if (!buffer_button_click.loadFromFile("assets/sounds/button_click_sound.wav"))
	{
		printf("Error loading background music file");
	}
}

void SoundHandler::playSound(SoundType soundType)
{
	switch (soundType)
	{
	case SoundType::BUTTON_CLICK:
		sound_effect.setBuffer(buffer_button_click);
		break;
	default:
		printf("Invalid sound type");
		return;
	}
	
	sound_effect.play();
}

void SoundHandler::playBackgroundMusic()
{
	background_music.setLoop(true);
	background_music.setVolume(background_music_volume);
	background_music.play();
}