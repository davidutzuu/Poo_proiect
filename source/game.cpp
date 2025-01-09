#include "C:\\Users\\Admin\\Documents\\GitHub\\Poo_proiect\\11\\Game.h"
#include <iostream>

Game::Game()
    : ball(400, 300, 10, 5, 5), paddle(350, 580, 100, 20, 10), score(0), running(true) {
    // Inițializăm un set de bricks
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            bricks.emplace_back(50 + j * 60, 50 + i * 30, 50, 20);
        }
    }
}

void Game::initialize() {
    std::cout << "Jocul a fost initializat." << std::endl;
}

void Game::update() {
    ball.move();

    // Detectare coliziuni cu pereti
    if (ball.getX() <= 0 || ball.getX() + ball.getRadius() >= 800) {
        ball.bounce(false);
    }
    if (ball.getY() <= 0) {
        ball.bounce(true);
    }

    // Detectare coliziune cu paddle
    if (ball.getY() + ball.getRadius() >= paddle.getY() &&
        ball.getX() >= paddle.getX() &&
        ball.getX() <= paddle.getX() + paddle.getWidth()) {
        ball.bounce(true);
    }

    // Detectare coliziune cu bricks
    for (auto &brick : bricks) {
        if (!brick.isDestroyed() &&
            ball.getX() + ball.getRadius() >= brick.getX() &&
            ball.getX() <= brick.getX() + brick.getWidth() &&
            ball.getY() + ball.getRadius() >= brick.getY() &&
            ball.getY() <= brick.getY() + brick.getHeight()) {
            ball.bounce(true);
            brick.hit();
            score += 10;
        }
    }

    // Verificare daca mingea a iesit din joc
    if (ball.getY() > 600) {
        running = false;
    }
}

void Game::render() {
    std::cout << "Scor: " << score << std::endl;
    std::cout << ball << std::endl;
    std::cout << paddle << std::endl;
    for (const auto &brick : bricks) {
        if (!brick.isDestroyed()) {
            std::cout << brick << std::endl;
        }
    }
}

[[nodiscard]] bool Game::isRunning() const {
    return running;
}

void Game::handleInput(char input) {
    if (input == 'a') {
        paddle.moveLeft();
    } else if (input == 'd') {
        paddle.moveRight();
    }
}

std::ostream &operator<<(std::ostream &os, const Game &game) {
    os << "Game [score: " << game.score << "]";
    return os;
}
