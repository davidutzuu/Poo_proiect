#include "Paddle.h"

Paddle::Paddle(int length) : length(length) {}
void Paddle::moveLeft() { /* Logic to move paddle left */ }
void Paddle::moveRight() { /* Logic to move paddle right */ }
std::ostream& operator<<(std::ostream &os, const Paddle &paddle) {
    os << "Paddle[length: " << paddle.length << "]";
    return os;
}
