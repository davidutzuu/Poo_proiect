#include "Game.h" // includerea headerului Game.h

Game::Game(Ball ball, Paddle paddle, std::vector<Brick> bricks)
   : ball(ball), paddle(paddle), bricks(bricks) {} // inițializarea variabilelor membru cu constructorul

void Game::start() { /* inițializarea starii jocului și pornirea acestuia */ } // Definirea funcției de start

void Game::update() { /* actualizarea starii jocului */ } // definirea funcției de update

std::ostream& operator<<(std::ostream &os, const Game &game) { // definirea operatorului de afișare
    os << "Game[ball: " << game.ball << ", paddle: " << game.paddle << "]"; // afiseaza obiectele Ball și Paddle
    for (const auto &brick : game.bricks) { // iterează prin vectorul de Brick-uri
        os << ", brick: " << brick; // afișeaza fiecare Brick
    }
    return os; // returneaza fluxul de ieșire
}
