#include "game.hpp"
using namespace std;

int main() {
    // Item 4: No uninitialized objects - all members initialized in constructors
    Game game1("Elden Ring", "FromSoftware", 59.99, 9.3);
    game1.displayInfo();
    std::cout << std::endl;

    Game game2("Slay the Spire", "Mega Crit", 24.99, 9.7);
    game2.displayInfo();
    std::cout << std::endl;

    // Item 5: Class hierarchy with base and derived class
    Media* media_ptr = new Game("Cyberpunk 2077", "CD Projekt", 29.99, 7.5); // Polymorphism
    media_ptr->displayInfo();
    delete media_ptr; // Demonstrates destruction order
    std::cout << std::endl;

    // Item 6: Copy/move constructors disabled
    // Game game3 = game1; // Uncommenting this line will cause a compilation error due to deleted copy constructor

    return 0;
}
