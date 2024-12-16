#include "Ball.h"
#include <iostream>

Ball::Ball(float x, float y, float radius, float speedX, float speedY)
    : GameObject(x, y), radius(radius), speedX(speedX), speedY(speedY) {}

void Ball::update() {
    x += speedX;
    y += speedY;

    // Logică simplă de coliziune
    if (x <= 0 || x >= 800) speedX = -speedX;
    if (y <= 0 || y >= 600) speedY = -speedY;
}

void Ball::draw() const {
    std::cout << "Drawing Ball at (" << x << ", " << y << ") with radius " << radius << "\n";
}

std::unique_ptr<GameObject> Ball::clone() const {
    return std::make_unique<Ball>(*this);
}