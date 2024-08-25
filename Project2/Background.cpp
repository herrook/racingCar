#include "Background.h"
#include <iostream>

Background::Background() : scrollSpeed(0.0f) {
    if (!texture.loadFromFile("E:\\samsung\\game\\Project2\\Project2\\assets\\cars\\background.png")) {
        std::cerr << "Error loading background image!" << std::endl;
    }

    // Set the texture to the two sprites for scrolling effect
    sprite1.setTexture(texture);
    sprite2.setTexture(texture);

    // Position the sprites, sprite1 at the top, sprite2 right after it vertically
    sprite1.setPosition(0, 0);
    sprite2.setPosition(0, -texture.getSize().y);
}

void Background::update(float gameSpeed) {
    // Scroll the background based on the game speed
    scrollSpeed = gameSpeed;

    // Move both sprites downwards
    sprite1.move(0, scrollSpeed);
    sprite2.move(0, scrollSpeed);

    // Reset positions when the sprites move out of the screen
    if (sprite1.getPosition().y >= sprite1.getGlobalBounds().height) {
        sprite1.setPosition(0, sprite2.getPosition().y - sprite1.getGlobalBounds().height);
    }
    if (sprite2.getPosition().y >= sprite2.getGlobalBounds().height) {
        sprite2.setPosition(0, sprite1.getPosition().y - sprite2.getGlobalBounds().height);
    }
}

void Background::render(sf::RenderWindow& window) {
    // Draw both sprites to create a seamless scrolling effect
    window.draw(sprite1);
    window.draw(sprite2);
}
