#include "C:\Users\Dragos\Documents\GitHub\Poo_proiect\11\Brick.h"

Brick::Brick(float x, float y) : pozitieX(x), pozitieY(y), distrusa(false) {} // initializare a pozitiei si starii

Brick::Brick(const Brick& alta)
    : pozitieX(alta.pozitieX), pozitieY(alta.pozitieY), distrusa(alta.distrusa) {} // constructor de copiere

Brick& Brick::operator=(const Brick& alta) { // operator= de copiere
    if (this != &alta) { // verifica daca nu se copiaza in sine
        pozitieX = alta.pozitieX; // copiaza pozitia X
        pozitieY = alta.pozitieY; // copiaza pozitia Y
        distrusa = alta.distrusa; // copiaza starea
    }
    return *this; // returneaza obiectul curent
}

Brick::~Brick() {} // destructor

void Brick::loveste() { // distruge brick-ul
    distrusa = true; // seteaza starea ca fiind distrusa
}

bool Brick::esteDistrusa() const { // verifica daca brick-ul este distrus
    return distrusa; // returneaza starea
}

std::ostream& operator<<(std::ostream& os, const Brick& caramida) { // operator de afisare
    os << "Brick[x: " << caramida.pozitieX << ", y: " << caramida.pozitieY << ", distrusa: " << (caramida.distrusa ? "da" : "nu") << "]"; // afiseaza informatiile despre brick
    return os; // returneaza fluxul de iesire
}
