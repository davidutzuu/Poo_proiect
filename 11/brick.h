#ifndef BRICK_H
#define BRICK_H
#include <iostream>

class Brick {
    int x, y;
    bool destroyed;
public:
    Brick(int x, int y, bool destroyed);
    friend std::ostream& operator<<(std::ostream &os, const Brick &brick);
};

#endif // BRICK_H

