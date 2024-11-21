#include "media.hpp"
using namespace std;


class Game : public Media {
private:
    double price;
    double rating;

public:
    Game(const char* init_title = "Unknown", const char* init_developer = "Unknown", double init_price = 0.0, double init_rating = 0.0)
        : Media(init_title, init_developer), price(init_price), rating(init_rating) {
        std::cout << "Derived Game object created: " << title << std::endl;
    }

    ~Game() override {
        std::cout << "Derived Game object destroyed: " << title << std::endl;
    }

    void displayInfo() const override {
        Media::displayInfo();
        std::cout << "Price: " << price << ", Rating: " << rating << std::endl;
    }

    // Disable copy and move constructors and assignment operators
    Game(const Game&) = delete;
    Game& operator=(const Game&) = delete;
    Game(Game&&) = delete;
    Game& operator=(Game&&) = delete;
};
