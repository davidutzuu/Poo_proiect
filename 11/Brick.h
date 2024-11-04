#ifndef BRICK_H
#define BRICK_H

#include <iostream> // include biblioteca iostream pentru afisare

class Brick { // clasa pentru brick
private:
    float pozitieX, pozitieY; // pozitia brick-ului
    bool distrusa; // starea brick-ului

public:
    Brick(float x, float y); // constructor de initializare
    Brick(const Brick& alta); // constructor de copiere
    Brick& operator=(const Brick& alta); // operator= de copiere
    ~Brick(); // destructor

    void loveste(); // distruge brick-ul
    bool esteDistrusa() const; // verifica daca brick-ul este distrus
    friend std::ostream& operator<<(std::ostream& os, const Brick& caramida); // operator<<
};

#endif // BRICK_H
