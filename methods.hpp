# define STRSIZE 100
#include <cstring>
#include <string>
using namespace std;

class Game
{
    private:
        char *title;
        char *developer;
        double *price;
        double *rating;

    public:
    //Default
    Game() : title(nullptr), developer(nullptr), price(0), rating(0)
    {
        title = new char[STRSIZE];
        developer = new char[STRSIZE];
        price = new double;
        rating = new double;
    }

    //Basic
    Game(const char *init_title, const char *init_developer, double init_price, double init_rating)
    {
        title = new char[STRSIZE];
        developer = new char[STRSIZE];
        price = new double;
        rating = new double;

        strcpy(title, init_title);
        strcpy(developer, init_developer);
        *price = init_price;
        *rating = init_rating;
    }

    char *getGameTitle()
    {
        return title;
    }

    char *getGameDeveloper()
    {
        return developer;
    }

    double getGamePrice()
    {
        return *price;
    }

    double getGameRating()
    {
        return *rating;
    }

    Game operator+(const Game &other)
    {
        cout << "Operator Changed" << endl;
        char combinedTitle[STRSIZE * 2];
        snprintf(combinedTitle, sizeof(combinedTitle), "%s + %s Bundle", title, other.title);
     
        char combinedDeveloper[STRSIZE * 2];
        snprintf(combinedDeveloper, sizeof(combinedDeveloper), "%s and %s", developer, other.developer);

        double discount = ((*price + *other.price)*20)/100;
        double averagePrice = *price + *other.price - discount;

        double averageRating = (*rating + *other.rating) / 2;

        Game newGame(combinedTitle, combinedDeveloper, averagePrice, averageRating);
        return newGame;
    }

    //Deconstructor
    ~Game()
    {
        cout << "Destructing: " << title << endl;

        delete[] title;   
        delete[] developer; 
        delete price;       
        delete rating; 

        cout << "Destructed Title Should not be readable: " << title << endl;
        cout << "\n" << endl;
    }
};