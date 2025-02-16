#include "C:\Users/Admin/Documents/GitHub/Poo_proiect/11/Game.h"

Game* Game::instance = nullptr;

Game::Game()
    : ball(400, 300, 10, 5, 5), paddle(350, 580, 100, 20, 10), score(0), running(true) {
    // Inițializăm un set de bricks
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 10; ++j) {
            bricks.emplace_back(50 + j * 60, 50 + i * 30, 50, 20);
        }
    }
}

Game* Game::getInstance() {
    if (!instance)
        instance = new Game();
    return instance;
}

void Game::destroyInstance() {
    delete instance;
    instance = nullptr;
}

void Game::initialize() {
    std::cout << "Jocul a fost initializat." << std::endl;
}

void Game::update() {
    // Logica actualizării jocului
}

void Game::render() {
    // Redesenarea jocului
}

void Game::handleInput(char input) {
    // Gestionarea input-ului
}

bool Game::isRunning() {
    return running;
}
