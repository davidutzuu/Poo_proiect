#include "Paddle.h" // includerea headerului Paddle.h

Paddle::Paddle(int length) : length(length) {} // nițializarea variabilei membru cu constructorul

void Paddle::moveLeft() { /* logica pentru a mișca paleta la stânga */ } // definirea funcției pentru a mișca paleta la stnga

void Paddle::moveRight() { /* Logica pentru a mișca paleta la dreapta */ } // Definirea funcției pentru a mișca paleta la dreapta

std::ostream& operator<<(std::ostream &os, const Paddle &paddle) { // Definirea operatorului de afișare
    os << "Paddle[length: " << paddle.length << "]"; // afișeaza valoarea variabilei membru
    return os; // Returneaza fluxul de ieșire
}
