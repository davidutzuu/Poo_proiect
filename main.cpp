// main.cpp
#include "Ball.h"
#include "Paddle.h"
#include "Brick.h"
#include "Game.h"

int main() {
    Ball ball(0, 0, 10);
    Paddle paddle(5);
    std::vector<Brick> bricks = { Brick(0, 0, false), Brick(1, 0, false) };
    Game game(ball, paddle, bricks);

    game.start();
    game.update();
    std::cout << ball << std::endl;
    std::cout << paddle << std::endl;
    std::cout << game << std::endl;

    return 0;
}
