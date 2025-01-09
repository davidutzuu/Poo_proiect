#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

// Clasa de baza abstracta pentru toate obiectele din joc (ex. Ball, Brick, Paddle).
class GameObject {
public:
    // Metoda virtuala pura pentru a implementa renderizarea in clasele derivate.
    virtual void render() const = 0;
    virtual ~GameObject() = default; // Destructor virtual.
};

#endif // GAME_OBJECT_H
