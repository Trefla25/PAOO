#include <memory>
#include "game.hpp"
using namespace std;

int main() {
    // unique
    unique_ptr<Game> game1 = make_unique<Game>("Elden Ring", "FromSoftware", 59.99, 9.3);
    game1->displayInfo();
    cout << endl;

    //shared
    shared_ptr<Game> game2 = make_shared<Game>("Slay the Spire", "Mega Crit", 24.99, 9.7);
    game2->displayInfo();
    cout << endl;

    //shared_ptr behavior
    shared_ptr<Game> game3 = game2; // Shared ownership
    cout << "Shared pointer reference count: " << game2.use_count() << endl;

    //polymorphism with smart pointers
    unique_ptr<Media> media_ptr = make_unique<Game>("Cyberpunk 2077", "CD Projekt", 29.99, 7.5);
    media_ptr->displayInfo();
    cout << endl;

    //Copy 
    Game game4 = *game1;
    game4.displayInfo();
    cout << endl;

    Game game5("The Bazaar", "Tempo", 33, 9);
    game5 = *game1;
    game5.displayInfo();
    cout << endl;

    // Move
    Game game6 = std::move(*game1);
    game6.displayInfo();
    cout << endl;

    Game game7("World of Warcraft", "Blizzard", 60, 9);
    game7 = std::move(game6);
    game7.displayInfo();
    cout << endl;

    return 0;
}
