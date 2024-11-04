#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <vector> //  biblioteca vector pentru a utiliza std::vector
#include "Ball.h" // Includerea headerelor
#include "Paddle.h"
#include "Brick.h"
class Game { // definitrea clasei Game
    Ball ball; // declararea unui obiect Ball ca membru
    Paddle paddle; // declararea unui obiect Paddle ca membru
    std::vector<Brick> bricks; // declarația unui vector de obiecte Brick
public:
    Game(Ball ball, Paddle paddle, std::vector<Brick> bricks); // constructor cu parametri
    void start(); // declararea funcției pentru a începe jocul
    void update(); // declararea funcției pentru a actualiza starea jocului
    friend std::ostream& operator<<(std::ostream &os, const Game &game); // declarerea operatorului de afișare
};

#endif // GAME_H

