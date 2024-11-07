#include <iostream>
#include "methods.hpp"
using namespace std;

int main(void){
    Game game1("Elden Ring", "FromSoftware", 59.99, 9.3);
    cout << "Game1 information: " << endl;
    cout << "Game Title: " << game1.getGameTitle() << endl;
    cout << "Game Developer: " << game1.getGameDeveloper() << endl;
    cout << "Game Price: " << game1.getGamePrice() << endl;
    cout << "Game Rating: " << game1.getGameRating() << endl;

    cout << "\n" << endl;

    Game game2("Slay the Spire", "Mega Crit", 24.99, 9.7);
    cout << "Game2 information: " << endl;
    cout << "Game Title: " << game2.getGameTitle() << endl;
    cout << "Game Developer: " << game2.getGameDeveloper() << endl;
    cout << "Game Price: " << game2.getGamePrice() << endl;
    cout << "Game Rating: " << game2.getGameRating() << endl;

    cout << "\n" << endl;

    Game game3 = game1 + game2;
    cout << "Bundle information: " << endl;
    cout << "Bundle Title: " << game3.getGameTitle() << endl;
    cout << "Bundle Developers: " << game3.getGameDeveloper() << endl;
    cout << "Bundle Price: " << game3.getGamePrice() << endl;
    cout << "Game Rating: " << game3.getGameRating() << endl;

    cout << "\n" << endl;

    return 0;
}