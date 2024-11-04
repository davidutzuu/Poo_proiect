#include "ball.h" // include header-ul pentru clasa ball
#include "paddle.h" // include header-ul pentru clasa paddle
#include "brick.h" // include header-ul pentru clasa brick
#include "game.h" // include header-ul pentru clasa game

int main() {
    ball ball(0, 0, 10); // creeaza un obiect ball cu coordonatele (0, 0) si viteza 10
    paddle paddle(5); // creeaza un obiect paddle cu lungimea 5
    std::vector<brick> bricks = { brick(0, 0, false), brick(1, 0, false) }; // creeaza un vector de obiecte brick; fiecare caramida are coordonatele si starea de distrugere
    game game(ball, paddle, bricks); // creeaza un obiect game care include mingea, paleta si caramizile

    game.start(); // initializeaza si incepe jocul
    game.update(); // actualizeaza starea jocului
    std::cout << ball << std::endl; // afiseaza informatiile despre mingea curenta
    std::cout << paddle << std::endl; // afiseaza informatiile despre paleta
    std::cout << game << std::endl; // afiseaza informatiile despre joc (mingea, paleta si caramizile)

    return 0; // returneaza 0 indicand ca programul s-a terminat cu succes
}

