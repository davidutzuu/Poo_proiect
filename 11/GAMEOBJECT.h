#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <memory>
#include <iostream>

// Clasa de bază pentru toate obiectele din joc
class GameObject {
protected:
    float x, y; // Coordonate obiect
public:
    GameObject(float x, float y) : x(x), y(y) {}
    virtual ~GameObject() = default;

    virtual void update() = 0; // Funcție virtuală pură pentru actualizare
    virtual void draw() const = 0; // Funcție virtuală pură pentru afișare

    virtual std::unique_ptr<GameObject> clone() const = 0; // Constructor virtual (clone)
};

#endif // GAMEOBJECT_H