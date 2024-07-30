#pragma once

class LevelSound
{
public:
	LevelSound();


	void Play();


	void Stop();


	void AdjustSound(const float volumePercent, const float pitch);


	const float GetVolume() const;


	void FadeOut();


private:
	int currentSoundIndex_{ 0 };

	Audio::Sound bgm1_{ "assets/sounds/DesertWalk.wav", Audio::Sound::Type::Background };
};