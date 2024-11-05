#include "C:\Users\Dragos\Documents\GitHub\Poo_proiect\11\Game.h"

Game::Game(const Ball& mingea, const Paddle& rame)
    : mingea(mingea), rame(rame) {} // initializarea jocului

void Game::adaugaBrick(const Brick& caramida) { // adauga un brick
    caramizi.push_back(caramida); // adauga brick-ul in vector
}

void Game::actualizeaza() { // actualizeaza starea jocului
    mingea.muta(); // muta mingea
}

void Game::afiseaza() const { // afiseaza starea jocului
    std::cout << mingea << std::endl; // afiseaza mingea
    std::cout << rame << std::endl; // afiseaza paddle-ul
    for (const auto& caramida : caramizi) { // parcurge toate brick-urile
        std::cout << caramida << std::endl; // afiseaza brick-ul
    }
}
