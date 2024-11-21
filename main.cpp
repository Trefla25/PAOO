#include "game.hpp"
using namespace std;

int main() {
    //all members initialized in constructors
    Game game1("Elden Ring", "FromSoftware", 59.99, 9.3);
    game1.displayInfo();
    std::cout << std::endl;

    Game game2("Slay the Spire", "Mega Crit", 24.99, 9.7);
    game2.displayInfo();
    std::cout << std::endl;

    //Class hierarchy with base and derived class
    Media* media_ptr = new Game("Cyberpunk 2077", "CD Projekt", 29.99, 7.5); // Polymorphism
    media_ptr->displayInfo();
    delete media_ptr;
    std::cout << std::endl;

    // Copy/move constructors disabled
    //Game game3 = game1; //compilation error, deleted copy constrructor
    ///game1 = game2; // deleted operator

    return 0;
}
