#include "C:\Users\Dragos\Documents\GitHub\Poo_proiect\11\Paddle.h"

Paddle::Paddle(float x, float y, float latime)
    : pozitieX(x), pozitieY(y), latime(latime) {} // initializare a pozitiei si latimii

Paddle::Paddle(const Paddle& alta)
    : pozitieX(alta.pozitieX), pozitieY(alta.pozitieY), latime(alta.latime) {} // constructor de copiere

Paddle& Paddle::operator=(const Paddle& alta) { // operator= de copiere
    if (this != &alta) { // verifica daca nu se copiaza in sine
        pozitieX = alta.pozitieX; // copiaza pozitia X
        pozitieY = alta.pozitieY; // copiaza pozitia Y
        latime = alta.latime; // copiaza latimea
    }
    return *this; // returneaza obiectul curent
}

Paddle::~Paddle() {} // destructor

void Paddle::muta(float deltaX) { // muta paddle-ul
    pozitieX += deltaX; // actualizeaza pozitia paddle-ului
}

std::ostream& operator<<(std::ostream& os, const Paddle& rame) { // operator de afisare
    os << "Paddle[x: " << rame.pozitieX << ", y: " << rame.pozitieY << ", latime: " << rame.latime << "]"; // afiseaza informatiile despre paddle
    return os; // returneaza fluxul de iesire
}
