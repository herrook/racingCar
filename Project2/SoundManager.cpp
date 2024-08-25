#include "SoundManager.h"

SoundManager::SoundManager() {
    gameSoundBuffer.loadFromFile("assets\\sound\\game.wav");
    gameSound.setBuffer(gameSoundBuffer);

    gameOverSoundBuffer.loadFromFile("assets\\sound\\crash.wav");
    gameOverSound.setBuffer(gameOverSoundBuffer);
}

void SoundManager::playGameSound() {
    gameSound.play();
}

void SoundManager::stopGameSound() {
    gameSound.stop();
}

void SoundManager::playGameOverSound() {
    stopGameSound();
    gameOverSound.play();
}
