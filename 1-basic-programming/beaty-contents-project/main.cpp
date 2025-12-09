#include <iostream>

struct Contestant {
    int number;
    char name[12];
    int age;
    char gender[2];
    float hipCircumference;
    float shoulderCircumference;
    float neckCircumference;
    float calfCircumference;
};

const int MAX_NUM_OF_CONTESTANTS = 30;

int main() {
    int menuChoice;

    std::cout << "Chose a option from the menu";

    std::cin >> menuChoice;

    switch(menuChoice) {
        case 1:
            "Add items here";
        break;
    }
}
