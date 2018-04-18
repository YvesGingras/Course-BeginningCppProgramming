#include <iostream>
using namespace std;

int main() {
    cout << "Hello, InitializingVariables!" << endl << endl;

    int roomWidth {0};
    cout << "The width of the room? ";
    cin >> roomWidth;

    int roomLength {0};
    cout << "The length of the room? ";
    cin >> roomLength;

    cout << "The area of the room is: " << roomLength * roomWidth << " square feet" << endl;
    return 0;
}