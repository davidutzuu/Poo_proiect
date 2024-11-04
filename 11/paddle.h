#ifndef PADDLE_H // Include guard pentru a preveni includerea multiplă
#define PADDLE_H // Include guard pentru a preveni includerea multiplă
#include <iostream> // Includerea bibliotecii iostream pentru operațiile de intrare/ieșire

class Paddle { // Definirea clasei Paddle
    int length; // Declarația variabilei private pentru lungimea paletei
public:
    Paddle(int length); // Constructor cu parametri
    void moveLeft(); // Declarația funcției pentru a mișca paleta la stânga
    void moveRight(); // Declarația funcției pentru a mișca paleta la dreapta
    friend std::ostream& operator<<(std::ostream &os, const Paddle &paddle); // Declarația operatorului de afișare
};

#endif // PADDLE_H
