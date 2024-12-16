#ifndef BRICK_H
#define BRICK_H

#include "GameObject.h"

class Brick : public GameObject {
private:
    bool destroyed;
public:
    Brick(float x, float y);

    void update() override;
    void draw() const override;

    void destroy();
    std::unique_ptr<GameObject> clone() const override;
};

#endif // BRICK_H
