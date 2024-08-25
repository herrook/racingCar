#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <SFML/Graphics.hpp>

class UIManager {
public:
    UIManager();
    void renderScore(sf::RenderWindow& window, int score);
    void renderGameOver(sf::RenderWindow& window);

private:
    sf::Font font;
    sf::Text scoreText;
    sf::Text gameOverText;
};

#endif
