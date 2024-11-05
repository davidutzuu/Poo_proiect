#ifndef BALL_H
#define BALL_H

#include <iostream>

class Ball { // clasa pentru minge
private:
    float pozitieX, pozitieY; // pozitia mingii
    float vitezaX, vitezaY; // viteza mingii

public:
    Ball(float x, float y, float vitezaX, float vitezaY); // constructor de initializare
    Ball(const Ball& alta); // constructor de copiere
    Ball& operator=(const Ball& alta); // operator= de copiere
    ~Ball(); // destructor care va fi apelat automat cnd obiectul este distrus

    void muta(); // muta mingea
    void pocneste(); // inverseaza directia mingii
    friend std::ostream& operator<<(std::ostream& os, const Ball& mingea); // operator<< care permite afișarea informațiilor
                                                                          //despre mingea în fluxul de ieșire.

};

#endif // BALL_H
