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
    static Game* instance; // Instanța unică
    Ball ball;
    Paddle paddle;
    std::vector<Brick> bricks;
    int score; // Scorul jucatorului.
    bool running; // Starea jocului: ruleaza sau nu.

    Game(); // Constructor privat

public:
    static Game* getInstance(); // Returneaza instanta Singleton
    static void destroyInstance(); // Distruge instanta

    void initialize(); // Initializeaza jocul.
    void update(); // Actualizeaza logica jocului.
    void render(); // Redeneaza jocul.
    void handleInput(char input);
    bool isRunning();
};

#endif
