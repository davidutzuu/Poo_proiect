#include "Ball.h" // includerea headerului Ball.h

Ball::Ball(int x, int y, int speed) : x(x), y(y), speed(speed) {} // inițializarea variabilelor membru cu constructorul

Ball::Ball(const Ball &other) : x(other.x), y(other.y), speed(other.speed) {} // Constructor de copiere/inițializează variabilele membru cu valorile din alt obiect

Ball& Ball::operator=(const Ball &other) { // definirea operatorului de atribuire de copiere
    if (this == &other) return *this; // verifică auto-atribuirea
    x = other.x; // atribuirea valorii lui x din alt obiect
    y = other.y; // atribuirea valorii lui y din alt obiect
    speed = other.speed; // atribuirea valorii lui speed din alt obiect
    return *this; // returneaza referința la obiectul curent
}

Ball::~Ball() {} // Destructor

void Ball::move() { /* Logica pentru a mișca bila */ } // dfinirea funcției de mișcare a bilei

std::ostream& operator<<(std::ostream &os, const Ball &ball) { // dfinirea operatorului de afișare
    os << "Ball[x: " << ball.x << ", y: " << ball.y << ", speed: " << ball.speed << "]"; //afișeazavalorile variabilelor membru
    return os; // Returneaz fuxul de ieșire
}
