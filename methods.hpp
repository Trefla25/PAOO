# define STRSIZE 20
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

    //Deconstructor
    ~Game()
    {
        delete[] title;   
        delete[] developer; 
        delete price;       
        delete rating; 
    }
};