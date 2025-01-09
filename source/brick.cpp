#include "C:\Users/Admin/Documents/GitHub/Poo_proiect/11/Brick.h"

int Brick::totalBricks = 0; // Initializam atributul static.

Brick::Brick(float x, float y, float width, float height)
    : x(x), y(y), width(width), height(height), destroyed(false) {
    totalBricks++; // Incrementam contorul de caramizi.
}

bool Brick::isDestroyed() const {
    return destroyed;
}

void Brick::hit() {
    destroyed = true; // Setam caramida ca distrusa.
}

float Brick::getX() const {
    return x;
}

float Brick::getY() const {
    return y;
}

float Brick::getWidth() const {
    return width;
}

float Brick::getHeight() const {
    return height;
}

void Brick::render() const {
    if (!destroyed) {
        // Afiseaza pozitia si dimensiunile caramizii daca nu este distrusa.
        std::cout << "Rendering Brick at (" << x << ", " << y << ") size: " << width << "x" << height << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Brick &brick) {
    os << "Brick at (" << brick.x << ", " << brick.y << ") size: " << brick.width << "x" << brick.height
       << (brick.destroyed ? " [DESTROYED]" : "");
    return os;
}
