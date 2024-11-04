#ifndef PADDLE_H
#define PADDLE_H
#include <iostream>

class Paddle {
    int length;
public:
    Paddle(int length);
    void moveLeft();
    void moveRight();
    friend std::ostream& operator<<(std::ostream &os, const Paddle &paddle);
};

#endif // PADDLE_H
