#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Using if-else
    if (number > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (number < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    // Using switch
    int choice;
    std::cout << "Enter a choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You chose option 1." << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2." << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice." << std::endl;
            break;
    }

    return 0;
}