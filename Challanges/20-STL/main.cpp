#include <iostream>
#include <vector>
#include "Source/Person.h"

using namespace std;

template <typename T>
void display(const vector<T>& myVector) {
    cout << "[ ";
    for (const auto& item : myVector) {
        cout << item << " ";
    }
    cout << "]" << endl;
}

void display2(const vector<int>& myVector) {
    cout << "[ ";
    for_each(myVector.begin(),myVector.end(), [](int x){cout << x << " ";});
    cout << "]" << endl;
}


int main() {
    cout << "\nHello, 20-STL!\n" << endl;


    return 0;
}