#include <iostream>

/*This line generates a 'linker error'.*/
extern int x;


int main() {
    std::cout << "Hello, LinkerError!" << std::endl;

    std::cout << x;

    return 0;
}