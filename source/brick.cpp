#include "Brick.h"

Brick::Brick(int x, int y, bool destroyed) : x(x), y(y), destroyed(destroyed) {}
std::ostream& operator<<(std::ostream &os, const Brick &brick) {
    os << "Brick[x: " << brick.x << ", y: " << brick.y << ", destroyed: " << brick.destroyed << "]";
    return os;
}

