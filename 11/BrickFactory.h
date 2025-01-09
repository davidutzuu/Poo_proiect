#ifndef BRICK_FACTORY_H
#define BRICK_FACTORY_H

#include "Brick.h"

// Clasa pentru crearea caramizilor (Factory Pattern).
class BrickFactory {
public:
    static Brick createBrick(float x, float y, float width, float height, bool isSpecial) {
        Brick brick(x, y, width, height);
        if (isSpecial) {
            // Configurare speciala pentru caramizi speciale.
        }
        return brick;
    }
};

#endif // BRICK_FACTORY_H
