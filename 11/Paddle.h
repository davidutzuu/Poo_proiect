#ifndef PADDLE_H
#define PADDLE_H

#include <iostream>

class Paddle { // clasa pentru paddle
private:
    float pozitieX, pozitieY; // pozitia paddle-ului
    float latime; // latimea paddle-ului

public:
    Paddle(float x, float y, float latime); // constructor de initializare
    Paddle(const Paddle& alta); // constructor de copiere
    Paddle& operator=(const Paddle& alta); // operator= de copiere
    ~Paddle(); // destructor

    void muta(float deltaX); // muta paddle-ul
    friend std::ostream& operator<<(std::ostream& os, const Paddle& rame); // operator<<
};

#endif // PADDLE_H
