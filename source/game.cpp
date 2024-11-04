#include "Game.h"

Game::Game(Ball ball, Paddle paddle, std::vector<Brick> bricks)
   : ball(ball), paddle(paddle), bricks(bricks) {}
void Game::start() { /* Initialize game state and start */ }
void Game::update() { /* Update game state */ }
std::ostream& operator<<(std::ostream &os, const Game &game) {
    os << "Game[ball: " << game.ball << ", paddle: " << game.paddle << "]";
    for (const auto &brick : game.bricks) {
        os << ", brick: " << brick;
    }
    return os;
}
