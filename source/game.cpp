#include "Game.h"

void Game::addObject(std::unique_ptr<GameObject> obj) {
    objects.push_back(std::move(obj));
}

void Game::update() {
    for (const auto& obj : objects) {
        obj->update();
    }
}

void Game::draw() const {
    for (const auto& obj : objects) {
        obj->draw();
    }
}