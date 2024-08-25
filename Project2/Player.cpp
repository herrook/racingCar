#include "Player.h"

Player::Player() : speed(0.3f) {
    texture.loadFromFile("assets\\cars\\racer.png");
    sprite.setTexture(texture);
    sprite.setPosition(400, 500); // Initial position
}

void Player::update() {
	sf::Vector2f position = sprite.getPosition();
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && position.x >0) {
        sprite.move(-speed, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && position.x < 600) {
        sprite.move(speed, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && position.y < 800) {
        sprite.move(0, -speed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && position.y > 0) {
        sprite.move(0, speed);
    }
}

void Player::render(sf::RenderWindow& window) {
    window.draw(sprite);
}

sf::FloatRect Player::getBounds() const {
    return sprite.getGlobalBounds();
}
