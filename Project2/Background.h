#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SFML/Graphics.hpp>

class Background {
public:
    Background();
    void update(float gameSpeed);
    void render(sf::RenderWindow& window);

private:
    sf::Texture texture;
    sf::Sprite sprite1, sprite2;
    float scrollSpeed;
};

#endif
