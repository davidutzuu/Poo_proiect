#ifndef GAME_H
#define GAME_H

#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include <vector>
#include <iostream>

// Clasa Singleton care gestioneaza logica generala a jocului.
class Game {
private:
    Ball ball;
    Paddle paddle;
    std::vector<Brick> bricks;
    int score; // Scorul jucatorului.
    bool running; // Starea jocului: ruleaza sau nu.

public:
    Game(); // Constructor.

    static void initialize(); // Initializeaza jocul.
    void update(); // Actualizeaza logica jocului.
    void render(); // Deseneaza componentele jocului.
    [[nodiscard]] bool isRunning() const;
    void handleInput(char input); // Gestioneaza inputul de la utilizator.
    friend std::ostream &operator<<(std::ostream &os, const Game &game);
};

#endif // GAME_H
