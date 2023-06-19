#include "SoundManager.h"

void SoundManager::getMusic(const wchar_t* path) {
	PlaySound(path, NULL, SND_APPLICATION | SND_ASYNC | SND_LOOP);
}

void SoundManager::getSound(const wchar_t* path) {
	PlaySound(path, NULL, SND_APPLICATION | SND_ASYNC);
}