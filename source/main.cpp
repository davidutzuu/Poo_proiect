#include "Game.h"
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"

int main() {
    Game game;

    // Adaugăm obiecte în joc
    game.addObject(std::make_unique<Ball>(100, 100, 10, 2, 3));
    game.addObject(std::make_unique<Brick>(200, 150));
    game.addObject(std::make_unique<Paddle>(300, 500, 80, 20, 5));

    // Simulare simplă
    for (int i = 0; i < 10; ++i) {
        game.update();
        game.draw();
    }

    return 0;
}