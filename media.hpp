#include <iostream>
#include <cstring>
using namespace std;

class Media {
protected:
    char title[100];
    char developer[100];

public:
    // Default 
    Media() {
        strcpy(title, "Unknown");
        strcpy(developer, "Unknown");
        std::cout << "Base Media object created with default constructor: " << title << " by " << developer << std::endl;
    }

    // Normal 
    Media(const char* init_title, const char* init_developer) {
        strcpy(title, init_title);
        strcpy(developer, init_developer);
        std::cout << "Base Media object created with normal constructor: " << title << " by " << developer << std::endl;
    }

    //Deconstructor
    virtual ~Media() {
        std::cout << "Base Media object destroyed: " << title << std::endl;
    }

    //Display
    virtual void displayInfo() const {
        std::cout << "Title: " << title << ", Developer: " << developer << std::endl;
    }
};