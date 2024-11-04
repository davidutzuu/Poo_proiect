#include "Ball.h"

Ball::Ball(int x, int y, int speed) : x(x), y(y), speed(speed) {}
Ball::Ball(const Ball &other) : x(other.x), y(other.y), speed(other.speed) {}
Ball& Ball::operator=(const Ball &other) {
    if (this == &other) return *this;
    x = other.x;
    y = other.y;
    speed = other.speed;
    return *this;
}
Ball::~Ball() {}
void Ball::move() { /* Logic to move the ball */ }
std::ostream& operator<<(std::ostream &os, const Ball &ball) {
    os << "Ball[x: " << ball.x << ", y: " << ball.y << ", speed: " << ball.speed << "]";
    return os;
}
