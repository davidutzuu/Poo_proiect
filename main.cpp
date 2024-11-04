#include "C:\Users\Dragos\Documents\GitHub\Poo_proiect\11\Game.h"
#include <iostream> // include biblioteca iostream

int main() {
    Ball mingea(0.0f, 0.0f, 1.0f, 1.0f); // creeaza o mingea
    Paddle rame(0.0f, 0.0f, 100.0f); // creeaza un paddle
    Game joc(mingea, rame); // creeaza un joc

    joc.adaugaBrick(Brick(10.0f, 10.0f)); // adauga un brick
    joc.afiseaza(); // afiseaza starea jocului

    return 0; // returneaza 0 pentru succes
}


