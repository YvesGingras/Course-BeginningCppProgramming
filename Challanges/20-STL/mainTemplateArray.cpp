#include <iostream>
#include <vector>
#include "MyArray.h"

using namespace std;

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    MyArray<int, 5> nums;
    cout << "The size of nums is: "<< nums.GetSize() << endl;
    cout << nums << endl;

    nums.Fill(3);
    cout << "The size of nums is: "<< nums.GetSize() << endl;
    cout << nums << endl;

    nums.Fill(10);
    cout << nums << endl;

    nums[0] = 1000;
    nums[3] = 2000;
    cout << nums << endl;

    MyArray<int, 100> nums2 {1};
    cout << "The size of nums2 is: "<< nums2.GetSize() << endl;
    cout << nums2 << endl;


    MyArray<string, 10> myStrings(string{"Frank"});
    cout << "The size of myStrings is: "<< myStrings.GetSize() << endl;
    cout << myStrings << endl;

    myStrings[0] = string{"Larry"};
    cout << myStrings << endl;
    
    myStrings.Fill("X");
    cout << myStrings << endl;

    return 0;
}