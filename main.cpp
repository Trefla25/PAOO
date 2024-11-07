#include <iostream>
#include "methods.hpp"
using namespace std;

int main(void){
    Game game1("Elden Ring", "FromSoftware", 60, 10);
    cout << "Game1 information: " << endl;
    cout << game1.getGameTitle() << endl;

    return 0;
}