#ifndef GAME_H
#define GAME_H

#include "Ball.h" // include clasa Ball
#include "Paddle.h" // include clasa Paddle
#include "Brick.h" // include clasa Brick
#include <vector> // include vector pentru lista de brick-uri

class Game { // clasa pentru joc
private:
    Ball mingea; // mingea
    Paddle rame; // paddle-ul
    std::vector<Brick> caramizi; // brick-urile

public:
    Game(const Ball& mingea, const Paddle& rame); // constructor de initializare
    void adaugaBrick(const Brick& caramida); // adauga un brick
    void actualizeaza(); // actualizeaza starea jocului
    void afiseaza() const; // afiseaza starea jocului
};

#endif // GAME_H


