#include "UIManager.h"

UIManager::UIManager() {
    font.loadFromFile("assets/font/xirod.ttf");
    scoreText.setFont(font);
    scoreText.setCharacterSize(30);
    scoreText.setFillColor(sf::Color::White);

    gameOverText.setFont(font);
    gameOverText.setCharacterSize(50);
    gameOverText.setFillColor(sf::Color::Red);
    gameOverText.setString("Game Over! Press Enter to Restart");
    gameOverText.setPosition(150, 250);
}

void UIManager::renderScore(sf::RenderWindow& window, int score) {
    scoreText.setString("Score: " + std::to_string(score));
    scoreText.setPosition(10, 10);
    window.draw(scoreText);
}

void UIManager::renderGameOver(sf::RenderWindow& window) {
    window.draw(gameOverText);
}
