# define STRSIZE 20
#include <cstring>
#include <string>
using namespace std;

class Game
{
    private:
        char *title;
        char *developer;
        int *price;
        double *rating;

    public:
    //Default
    Game() : title(nullptr), developer(nullptr), price(0), rating(0)
    {
        title = new char[STRSIZE];
        developer = new char[STRSIZE];
        price = new int;
        rating = new double;
    }

    //Basic
    Game(const char *init_title, const char *init_developer, int init_price, double init_rating)
    {
        title = new char[STRSIZE];
        developer = new char[STRSIZE];
        price = new int;
        rating = new double;

        strcpy(title, init_title);
        strcpy(developer, init_developer);
    }

    char *getGameTitle()
    {
        return title;
    }
};