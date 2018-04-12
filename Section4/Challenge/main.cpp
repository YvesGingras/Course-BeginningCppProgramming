#include <iostream>


int main() {
    int favorite_number = 0;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;

    std::cout << "Hey! That is also my favorite number." << std::endl
    << "Not really!! " << favorite_number << " is my favorite number." << std::endl;

    return 0;
}
