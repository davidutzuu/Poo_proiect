#include "C:\\Users\\Admin\\Documents\\GitHub\\Poo_proiect\\11\\Game.h"
#include <iostream>

int main() {
    Game* game = Game::getInstance(); // Obținem instanța Singleton a jocului.
    game->initialize();

    while (game->isRunning()) {
        char input;
        std::cout << "Enter command (a: left, d: right, q: quit): ";
        std::cin >> input;
        try {
            game->handleInput(input);
        } catch (const std::exception &e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
        game->update();
        game->render();
    }

    std::cout << "Game Over!" << std::endl;

    Game::destroyInstance(); // Eliberăm memoria Singleton.
    return 0;
}
