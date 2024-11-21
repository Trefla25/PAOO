#include <iostream>
#include <cstring>
using namespace std;

class Media {
protected:
    char title[100];
    char developer[100];

public:
    Media(const char* init_title = "Unknown", const char* init_developer = "Unknown") {
        strcpy(title, init_title);
        strcpy(developer, init_developer);
        std::cout << "Base Media object created: " << title << " by " << developer << std::endl;
    }

    virtual ~Media() {
        std::cout << "Base Media object destroyed: " << title << std::endl;
    }

    virtual void displayInfo() const {
        std::cout << "Title: " << title << ", Developer: " << developer << std::endl;
    }
};