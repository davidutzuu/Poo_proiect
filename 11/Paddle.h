#ifndef PADDLE_H
#define PADDLE_H

#include "GameObject.h"

class Paddle : public GameObject {
private:
    float width, height;
    float speed;

public:
    Paddle(float x, float y, float width, float height, float speed);

    void update() override;
    void draw() const override;

    std::unique_ptr<GameObject> clone() const override;
};

#endif // PADDLE_H