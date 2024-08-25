#include "Game.h"

Game::Game() 
    : window(sf::VideoMode(800, 600), "Car Racing"), 
      isGameOver(false), 
      score(0), 
      gameSpeed(0.3),
	  obs1(200.f, -100.f, "assets\\cars\\obs1.png"),
	  obs2(400.f, -300.f, "assets\\cars\\obs2.png"),
	  obs3(600.f, -500.f, "assets\\cars\\obs3.png"),
	  obs4(600.f, -500.f, "assets\\cars\\obs4.png") {
	  soundManager.playGameSound();
      //resetGame();
}

void Game::run() {
    while (window.isOpen()) {
        processEvents();
        if (!isGameOver) {
            update();
        }
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if (event.type == sf::Event::KeyPressed && isGameOver) {
            if (event.key.code == sf::Keyboard::Space) {
                //resetGame();
            }
        }
    }
}

void Game::update() {
	background.update(gameSpeed);
    player.update();
    
	obs1.update(gameSpeed);
        
	if (player.getBounds().intersects(obs1.getBounds())) {
		isGameOver = true;
		soundManager.playGameOverSound();
		return;
	}
	obs2.update(gameSpeed);
        
	if (player.getBounds().intersects(obs2.getBounds())) {
		isGameOver = true;
		soundManager.playGameOverSound();
		return;
	}    
	obs3.update(gameSpeed);
        
	if (player.getBounds().intersects(obs3.getBounds())) {
		isGameOver = true;
		soundManager.playGameOverSound();
		return;
	}
	obs4.update(gameSpeed);
        
	if (player.getBounds().intersects(obs4.getBounds())) {
		isGameOver = true;
		soundManager.playGameOverSound();
		return;
	}
    // Increase score and speed over time
    score++;
    //gameSpeed += 0.0001;
}

void Game::render() {
    window.clear();
    background.render(window);
    player.render(window);
    obs1.render(window);
	obs2.render(window);
	obs3.render(window);
	obs4.render(window);
    uiManager.renderScore(window, score);
    
    if (isGameOver) {
        uiManager.renderGameOver(window);
    }
    
    window.display();
}

/*void Game::resetGame() {
    isGameOver = false;
    score = 0;
    gameSpeed = 0.3;

    // Assuming obs1, obs2, obs3, and obs4 are obstacle objects in the class
    obs1.setPosition(200.f, -100.f);
    obs1.setTexture("assets\\cars\\obs1.png");

    obs2.setPosition(400.f, -300.f);
    obs2.setTexture("assets\\cars\\obs2.png");

    obs3.setPosition(600.f, -500.f);
    obs3.setTexture("assets\\cars\\obs3.png");

    obs4.setPosition(800.f, -700.f);
    obs4.setTexture("assets\\cars\\obs4.png");

    soundManager.playGameSound();
}*/
