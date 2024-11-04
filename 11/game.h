#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector>
#include "Ball.h"
#include "Paddle.h"
#include "Brick.h"

class Game {
    Ball ball;
    Paddle paddle;
    std::vector<Brick> bricks;
public:
    Game(Ball ball, Paddle paddle, std::vector<Brick> bricks);
    void start();
    void update();
    friend std::ostream& operator<<(std::ostream &os, const Game &game);
};

#endif // GAME_H
