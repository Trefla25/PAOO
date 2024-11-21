#include "media.hpp"
using namespace std;


class Game : public Media {
private:
    double price;
    double rating;

public:
    // Default 
    Game() : Media() {
        price = 0.0;
        rating = 0.0;
        std::cout << "Derived Game object created with default constructor: " << title << std::endl;
    }

    // Normal 
    Game(const char* init_title, const char* init_developer, double init_price, double init_rating)
        : Media(init_title, init_developer), price(init_price), rating(init_rating) {
        std::cout << "Derived Game object created with normal constructor: " << title << std::endl;
    }
    //Deconstructor
    ~Game() override {
        std::cout << "Derived Game object destroyed: " << title << std::endl;
    }

    //Display
    void displayInfo() const override {
        Media::displayInfo();
        std::cout << "Price: " << price << ", Rating: " << rating << std::endl;
    }

    // Disablimg copy and move constructors and assignment operators
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    Game(Game&&) = delete;
    Game& operator=(Game&&) = delete;
};
