#include "C:\Users/Admin/Documents/GitHub/Poo_proiect/11/Paddle.h"

Paddle::Paddle(float x, float y, float width, float height, float speed)
    : x(x), y(y), width(width), height(height), speed(speed) {}

// Misca platforma la stanga, actualizand pozitia pe axa X.
void Paddle::moveLeft() {
    x -= speed;
    if (x < 0) { // Previne iesirea platformei din ecran pe partea stanga.
        x = 0;
    }
}

// Misca platforma la dreapta, actualizand pozitia pe axa X.
void Paddle::moveRight() {
    x += speed;
    if (x + width > 800) { // Previne iesirea platformei din ecran pe partea dreapta (presupunem ca latimea ecranului e 800).
        x = 800 - width;
    }
}

float Paddle::getX() const {
    return x;
}

float Paddle::getY() const {
    return y;
}

float Paddle::getWidth() const {
    return width;
}

float Paddle::getHeight() const {
    return height;
}

// Renderizeaza pozitia si dimensiunile platformei.
void Paddle::render() const {
    std::cout << "Rendering Paddle at (" << x << ", " << y << ") size: " << width << "x" << height << std::endl;
}

// Supraincarcam operatorul << pentru a afisa informatii despre platforma.
std::ostream &operator<<(std::ostream &os, const Paddle &paddle) {
    os << "Paddle at (" << paddle.x << ", " << paddle.y << ") size: " << paddle.width << "x" << paddle.height;
    return os;
}
