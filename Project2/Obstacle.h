#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <SFML/Graphics.hpp>
#include <string>
class Obstacle {
public:
	//Obstacle();
    Obstacle(float posX, float posY, std::string obsFile);
    void update(double gameSpeed);
    void render(sf::RenderWindow& window);
    sf::FloatRect getBounds() const;

private:
    sf::Texture texture;
    sf::Sprite sprite;
};

#endif
