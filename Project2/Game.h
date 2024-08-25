#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "Obstacle.h"
#include "SoundManager.h"
#include "UIManager.h"
#include "Background.h"
class Game {
public:
    Game();
    void run();
private:
    void processEvents();
    void update();
    void render();
   void resetGame();
    Background background;
    sf::RenderWindow window;
	
	Obstacle obs1;
	Obstacle obs2;
	Obstacle obs3;
	Obstacle obs4;
    Player player;
	
    std::vector<Obstacle> obstacles;
    SoundManager soundManager;
    UIManager uiManager;
    
    bool isGameOver;
    int score;
    double gameSpeed;
};

#endif
