#ifndef BRICK_H
#define BRICK_H // din nou, include guard pentru a preveni includerea multipla
#include <iostream>

class Brick { // Definirea clasei Brick
    int x, y; // variabile pentru poziția cărămizii
    bool destroyed; // Dvariabila pentru starea cărămizii (distrusă sau nu)
public:
    Brick(int x, int y, bool destroyed); // constructor cu parametri
    friend std::ostream& operator<<(std::ostream &os, const Brick &brick); // Declarația operatorului de afișare
};

#endif // BRICK_H

