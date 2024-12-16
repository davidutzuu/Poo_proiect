#ifndef GAME_H
#define GAME_H

#include <vector>
#include <memory>
#include "GameObject.h"

class Game {
private:
    std::vector<std::unique_ptr<GameObject>> objects;

public:
    void addObject(std::unique_ptr<GameObject> obj);
    void update();
    void draw() const;
};

#endif // GAME_H


