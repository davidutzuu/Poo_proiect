#ifndef BRICK_H
#define BRICK_H

#include "GameObject.h"
#include <iostream>

// Clasa Brick moștenește GameObject și reprezintă cărămizile din joc.
class Brick : public GameObject {
private:
    float x, y;         // Poziția cărămizii.
    float width, height; // Dimensiunile cărămizii.
    bool destroyed;     // Stare: distrusă sau nu.

public:
    static int totalBricks; // Atribut static pentru numărul total de cărămizi.

    // Constructor
    Brick(float x, float y, float width, float height);

    // Funcție care returnează dacă o cărămidă este distrusă
    [[nodiscard]] bool isDestroyed() const;

    // Funcție pentru a marca cărămida ca distrusă
    void hit();

    // Getters
    [[nodiscard]] float getX() const;
    [[nodiscard]] float getY() const;
    [[nodiscard]] float getWidth() const;
    [[nodiscard]] float getHeight() const;

    // Suprascrierea metodei render din GameObject
    void render() const override;

    // Operator de afișare
    friend std::ostream &operator<<(std::ostream &os, const Brick &brick);
};

#endif // BRICK_H
