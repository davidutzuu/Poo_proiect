#ifndef BALL_H // previne includerea multipla a acestui header
#define BALL_H // definește BALL_H pentru a preveni includerea multipla
#include <iostream> // include iostream pentru a folosi std::ostream

class ball {
    int x, y; // coordonatele x si y ale mingii
    int speed; // viteza mingii
public:
    ball(int x, int y, int speed); // constructor cu parametri
    ball(const ball &other); // constructor de copiere
    ball& operator=(const ball &other); // operator= de copiere
    ~ball(); // destructor

    void move(); // functie publica pentru a muta mingea
    friend std::ostream& operator<<(std::ostream &os, const ball &ball); // operator<< pentru afisare
};

#endif // BALL_H
