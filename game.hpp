#include <memory>
#include <mutex>
#include "media.hpp"

class Game : public Media {
private:
    double price;
    double rating;
    static std::mutex resourceMutex; // Mutex for res acc

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

    // Copy
    Game(const Game& other) : Media(other) {
        std::lock_guard<std::mutex> lock(resourceMutex); // thread - safe acc
        price = other.price;
        rating = other.rating;
        std::cout << "Derived Game object copied: " << title << std::endl;
    }

    Game& operator=(const Game& other) {
        if (this != &other) {
            std::lock_guard<std::mutex> lock(resourceMutex);
            Media::operator=(other);
            price = other.price;
            rating = other.rating;
            std::cout << "Derived Game object copy-assigned: " << title << std::endl;
        }
        return *this;
    }

    // Move
    Game(Game&& other) noexcept : Media(std::move(other)) {
        std::lock_guard<std::mutex> lock(resourceMutex);
        price = other.price;
        rating = other.rating;
        other.price = 0.0;
        other.rating = 0.0;
        std::cout << "Derived Game object moved: " << title << std::endl;
    }

    // Move
    Game& operator=(Game&& other) noexcept {
        if (this != &other) {
            std::lock_guard<std::mutex> lock(resourceMutex);
            Media::operator=(std::move(other));
            price = other.price;
            rating = other.rating;
            other.price = 0.0;
            other.rating = 0.0;
            std::cout << "Derived Game object move-assigned: " << title << std::endl;
        }
        return *this;
    }

    // Destructor
    ~Game() override {
        std::cout << "Derived Game object destroyed: " << title << std::endl;
    }

    // Display
    void displayInfo() const override {
        std::lock_guard<std::mutex> lock(resourceMutex);
        Media::displayInfo();
        std::cout << "Price: " << price << ", Rating: " << rating << std::endl;
    }
};

//static mutex
std::mutex Game::resourceMutex;
