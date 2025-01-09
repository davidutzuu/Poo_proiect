#ifndef BALL_H
#define BALL_H

#include "GameObject.h"
#include <iostream>

// Clasa Ball moștenește GameObject și reprezintă mingea.
class Ball : public GameObject {
private:
    float x, y;        // Poziția mingii.
    float dx, dy;      // Viteza pe axe X și Y.
    float radius;      // Raza mingii.

public:
    static int ballCount; // Atribut static pentru a contoriza câte mingi există.

    Ball(float x, float y, float radius, float dx, float dy); // Constructor.

    void move(); // Mișcă mingea în funcție de viteză.
    void bounce(bool horizontal); // Schimbă direcția mingii (orizontal/vertical).

    [[nodiscard]] float getX() const; // Obține poziția X.
    [[nodiscard]] float getY() const; // Obține poziția Y.
    [[nodiscard]] float getRadius() const; // Obține raza mingii.

    void render() const override; // Suprascrie metoda render din GameObject.

    friend std::ostream &operator<<(std::ostream &os, const Ball &ball);
};

#endif // BALL_H

