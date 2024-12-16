#ifndef BALL_H
#define BALL_H

#include "GameObject.h"

class Ball : public GameObject {
private:
    float radius;
    float speedX, speedY;

public:
    Ball(float x, float y, float radius, float speedX, float speedY);

    void update() override;
    void draw() const override;

    std::unique_ptr<GameObject> clone() const override;
};

#endif // BALL_H