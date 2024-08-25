#include "Obstacle.h"

Obstacle::Obstacle(float posX, float posY, std::string obsFile) {
    texture.loadFromFile(obsFile);
    sprite.setTexture(texture);
    sprite.setPosition(posX, posY);
}

void Obstacle::update(double gameSpeed) {
    sprite.move(0, gameSpeed); // Move downwards
    if (sprite.getPosition().y > 600) {
        sprite.setPosition(sprite.getPosition().x, -100.f); // Reset position
    }
}

void Obstacle::render(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::FloatRect Obstacle::getBounds() const {
    return sprite.getGlobalBounds();
}
