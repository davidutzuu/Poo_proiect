#include "Brick.h"
#include <iostream>

Brick::Brick(float x, float y) : GameObject(x, y), destroyed(false) {}

void Brick::update() {
    // Brick nu se mișcă, dar poate avea logică suplimentară
}

void Brick::draw() const {
    if (!destroyed) {
        std::cout << "Drawing Brick at (" << x << ", " << y << ")\n";
    }
}

void Brick::destroy() {
    destroyed = true;
}

std::unique_ptr<GameObject> Brick::clone() const {
    return std::make_unique<Brick>(*this);
}