#ifndef BRICK_H
#define BRICK_H // din nou ,i nclude guard pentru a preveni includerea multiplă
#include <iostream>

class Brick { // Definirea clasei Brick
    int x, y; // Declarația variabilelor private pentru poziția cărămizii
    bool destroyed; // variabila private pentru starea cărămizii (distrusă sau nu)
public:
    Brick(int x, int y, bool destroyed); // constructor cu parametri
    friend std::ostream& operator<<(std::ostream &os, const Brick &brick); // Declarația operatorului de afișare
};

#endif // BRICK_H
