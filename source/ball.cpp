#include "C:\Users\Dragos\Documents\GitHub\Poo_proiect\11\Ball.h"

Ball::Ball(float x, float y, float vitezaX, float vitezaY)
    : pozitieX(x), pozitieY(y), vitezaX(vitezaX), vitezaY(vitezaY) {} // initializare a pozitiilor si vitezelor

Ball::Ball(const Ball& alta)
    : pozitieX(alta.pozitieX), pozitieY(alta.pozitieY), vitezaX(alta.vitezaX), vitezaY(alta.vitezaY) {} // constructor de copiere

Ball& Ball::operator=(const Ball& alta) { // operator= de copiere
    if (this != &alta) { // verifica daca nu se copiaza in sine
        pozitieX = alta.pozitieX; // copiaza pozitia X
        pozitieY = alta.pozitieY; // copiaza pozitia Y
        vitezaX = alta.vitezaX; // copiaza viteza X
        vitezaY = alta.vitezaY; // copiaza viteza Y
    }
    return *this; // returneaza obiectul curent
}

Ball::~Ball() {} // destructor

void Ball::muta() { // muta mingea
    pozitieX += vitezaX; // actualizeaza pozitia X
    pozitieY += vitezaY; // actualizeaza pozitia Y
}

void Ball::pocneste() { // inverseaza directia mingii
    vitezaY = -vitezaY; // schimba semnul vitezei verticale
}

std::ostream& operator<<(std::ostream& os, const Ball& mingea) { // operator de afisare
    os << "Ball[x: " << mingea.pozitieX << ", y: " << mingea.pozitieY << "]"; // afiseaza pozitia mingii
    return os; // returneaza fluxul de iesire
}

}

