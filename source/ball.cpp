#include "C:\Users/Admin/Documents/GitHub/Poo_proiect/11/Ball.h"

int Ball::ballCount = 0; // Initializarea atributului static.

Ball::Ball(float x, float y, float radius, float dx, float dy)
    : x(x), y(y), radius(radius), dx(dx), dy(dy) {
    ballCount++; // Incrementam contorul de mingi.
}

void Ball::move() {
    x += dx; // Actualizam pozitia pe X.
    y += dy; // Actualizam pozitia pe Y.
}

void Ball::bounce(bool horizontal) {
    if (horizontal) {
        dy = -dy; // Inversam directia pe Y.
    } else {
        dx = -dx; // Inversam directia pe X.
    }
}

[[nodiscard]] float Ball::getX() const {
    return x;
}

[[nodiscard]] float Ball::getY() const {
    return y;
}

[[nodiscard]] float Ball::getRadius() const {
    return radius;
}

void Ball::render() const {
    // Afiseaza pozitia si dimensiunea mingii.
    std::cout << "Rendering Ball at (" << x << ", " << y << ") with radius " << radius << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Ball &ball) {
    os << "Ball at (" << ball.x << ", " << ball.y << ") with radius " << ball.radius;
    return os;
}
