#include <iostream>
#include "methods.hpp"
using namespace std;

int main(void){
    Game game1("Elden Ring", "FromSoftware", 59.99, 9.3);
    cout << "Game1 information: " << endl;
    cout << "Game Title: " << game1.getGameTitle() << endl;
    cout << "Game Developer: " << game1.getGameDeveloper() << endl;
    cout << "Game Price: " << game1.getGamePrice() << endl;
    cout << "Game Title: " << game1.getGameRating() << endl;

    cout << "\n" << endl;

    Game game2("Slay the Spire", "Mega Crit", 24.99, 9.7);
    cout << "Game1 information: " << endl;
    cout << "Game Title: " << game1.getGameTitle() << endl;
    cout << "Game Developer: " << game1.getGameDeveloper() << endl;
    cout << "Game Price: " << game1.getGamePrice() << endl;
    cout << "Game Title: " << game1.getGameRating() << endl;

    return 0;
}