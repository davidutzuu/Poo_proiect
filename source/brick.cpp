#include "Brick.h" // includerea headerului Brick.h

Brick::Brick(int x, int y, bool destroyed) : x(x), y(y), destroyed(destroyed) {} // inițializarea variabilelor membru cu constructorul

std::ostream& operator<<(std::ostream &os, const Brick &brick) { // Definirea operatorului de afișare
    os << "Brick[x: " << brick.x << ", y: " << brick.y << ", destroyed: " << brick.destroyed << "]"; // afiseaza valorile variabilelor membru
    return os; // returnează fluxul de ieșire
}

