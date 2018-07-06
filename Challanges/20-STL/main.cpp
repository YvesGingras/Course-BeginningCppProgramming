#include <iostream>
#include <array>

using namespace std;

// Display the array -- note the size MUST be included
// when passing a std::array to a function
void display(const std::array<int, 5> &array) {
    std::cout << "[ ";
    for (const auto &i: array)
        std::cout << i << " ";
    std::cout <<  "]"<< std::endl;
}



int main() {
    cout << "\nHello, 20-STL!\n" << endl;




    return 0;
}