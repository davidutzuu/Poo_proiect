#ifndef BALL_H
#define BALL_H
#include <iostream>

class Ball {
    int x, y;
    int speed;
public:
    Ball(int x, int y, int speed);
    Ball(const Ball &other);
    Ball& operator=(const Ball &other);
    ~Ball();

    void move();
    friend std::ostream& operator<<(std::ostream &os, const Ball &ball);
};

#endif // BALL_H

