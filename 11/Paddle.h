#ifndef PADDLE_H
#define PADDLE_H

#include "GameObject.h"
#include <iostream>

// Clasa Paddle mosteneste GameObject si reprezinta platforma controlata de jucator.
class Paddle : public GameObject {
private:
    float x, y;         // Pozitia platformei.
    float width, height; // Dimensiunile platformei.
    float speed;        // Viteza cu care se deplaseaza platforma.

public:
    // Constructor
    Paddle(float x, float y, float width, float height, float speed);

    // Functii pentru miscarea platformei
    void moveLeft();  // Misca platforma la stanga.
    void moveRight(); // Misca platforma la dreapta.

    // Getters
    [[nodiscard]] float getX() const;
    [[nodiscard]] float getY() const;
    [[nodiscard]] float getWidth() const;
    [[nodiscard]] float getHeight() const;

    // Suprascrierea metodei render din GameObject
    void render() const override;

    // Operator de afisare pentru clasa Paddle
    friend std::ostream &operator<<(std::ostream &os, const Paddle &paddle);
};

#endif // PADDLE_H
