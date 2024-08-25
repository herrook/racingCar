#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <SFML/Audio.hpp>

class SoundManager {
public:
    SoundManager();
    void playGameSound();
    void stopGameSound();
    void playGameOverSound();

private:
    sf::SoundBuffer gameSoundBuffer;
    sf::Sound gameSound;
    sf::SoundBuffer gameOverSoundBuffer;
    sf::Sound gameOverSound;
};

#endif
