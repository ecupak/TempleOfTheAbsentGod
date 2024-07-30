#include "precomp.h"
#include "Game.h"

#include "GameoverState.h"

#include "TitleScreenState.h"
#include "PlayScreenState.h"

#include "KeyboardManager.h"
#include "AudioManager.h"


GameoverState::GameoverState(Game& game)
	: game_{ game }
{

}


GameoverState::~GameoverState()
{

}


// Events that happen when state is first assigned.
void GameoverState::Enter(const bool)
{	
	volume_ = game_.audioManager_->GetLevelSound();
	
	// Check if save file exists.
	ifstream saveFile("assets/save_game.json");

	game_.RenderGameoverScreen(!saveFile.fail());
}


// Check input and return new state if neccessary.
GameState* GameoverState::HandleInput()
{
	if (game_.keyboardManager_->IsJustPressed(Action::Jump))
	{
		return new TitleScreenState{ game_ };
	}
	else if (game_.keyboardManager_->IsJustPressed(Action::Throw))
	{
		if (game_.FindLevelToLoad())
		{
			return new PlayScreenState{ true, game_ };
		}
	}

	return nullptr;
}


// Apply any state actions that depend on deltaTime.
void GameoverState::Update(const float deltaTime)
{
	if (volume_ > 0.0f)
	{
		volume_ -= deltaTime * 2.0f;
		volume_ = max(0.0f, volume_);

		game_.audioManager_->AdjustSound(volume_, 1.0f);
	}
}


// Events that happen when state is terminated.
void GameoverState::Exit()
{

}