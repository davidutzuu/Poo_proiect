#include "Paddle.h"
#include <iostream>

Paddle::Paddle(float x, float y, float width, float height, float speed)
    : GameObject(x, y), width(width), height(height), speed(speed) {}

void Paddle::update() {
    // Simulare mutare (ex. input stânga-dreapta)
    // Exemplu simplu (poate fi înlocuit cu input real)
    if (x > 0) x -= speed; // Mutare stânga
    if (x < 800 - width) x += speed; // Mutare dreapta
}

void Paddle::draw() const {
    std::cout << "Drawing Paddle at (" << x << ", " << y << ")\n";
}

std::unique_ptr<GameObject> Paddle::clone() const {
    return std::make_unique<Paddle>(*this);
}