#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include "Source/Person.h"

using namespace std;

template <typename T>
void display(const deque<T>& myVector) {
    cout << "[ ";
    for (const auto& item : myVector) {
        cout << item << " ";
    }
    cout << "]" << endl;
}

void Test1() {
    cout << "\nTest1================================" << endl;

    deque<int> deque1 {1, 2, 3, 4, 5};
    display(deque1);

    deque1 = {2,4,5,6};
    display(deque1);

    deque<int> deque2(10,100);
    display(deque2);

    deque1[0] = 100;
    deque1.at(1) = 200;
    display(deque1);
}

void Test2() {
    cout << "\nTest2================================" << endl;
    //push and pop

    deque<int> deque1 {0, 0, 0};
    display(deque1);

    deque1.push_back(10);
    deque1.push_back(20);
    display(deque1);

    deque1.push_front(100);
    deque1.push_front(200);
    display(deque1);

    cout << "Front: " << deque1.front() << endl;
    cout << "Back: " << deque1.back() << endl;
    cout << "Size: " << deque1.size() << endl;

    deque1.pop_back();
    deque1.pop_front();
    display(deque1);
}

void Test3() {
    cout << "\nTest3================================" << endl;
    // insert all even numbers into the back of a deque and all
    // odd numbers into the front

    vector<int> vector1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deque1;

    for (auto&& item : vector1) {
        if (item % 2 == 0)
            deque1.push_back(item);
        else
            deque1.push_front(item);
    }

    display(deque1);
}

void Test4() {
    cout << "\nTest4================================" << endl;
    //push front  VS back ordering

    vector<int> vector1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deque1;

    for (const auto& item : vector1) {
        deque1.push_front(item);
    }
    display(deque1);

    deque1.clear();

    for (const auto& item : vector1) {
        deque1.push_back(item);
    }
    display(deque1);
}

void Test5() {
    cout << "\nTest5================================" << endl;
    //push front  VS back ordering

    vector<int> vector1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> deque1;

    copy(vector1.begin(),vector1.end(),front_inserter(deque1));
    display(deque1);

    deque1.clear();

    copy(vector1.begin(),vector1.end(),back_inserter(deque1));
    display(deque1);
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();
    Test3();
    Test4();
    Test5();

    return 0;
}

