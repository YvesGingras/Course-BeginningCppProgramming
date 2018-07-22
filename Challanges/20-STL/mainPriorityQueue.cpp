#include <iostream>
#include <vector>
#include <queue>
#include "Source/Person.h"

using namespace std;

// This displays the priority queue by
// repeatedly topping and popping the priority queue
// It is being passed by value so we don't modify the
// priority queue being passed in
template <typename T>
void display(priority_queue<T> myPriorityQueue) {
    cout << "[ ";
    while (!myPriorityQueue.empty()) {
        T item = myPriorityQueue.top();
        myPriorityQueue.pop();
        cout <<  item << " ";
    }
    cout << "]" << endl ;
}

void display2(const vector<int>& myVector) {
    cout << "[ ";
    for_each(myVector.begin(),myVector.end(), [](int x){cout << x << " ";});
    cout << "]" << endl;
}

void Test1() {
    cout << "\nTest1================================" << endl;

    priority_queue<int> priorityQueue1;
    for (auto&& item : {3, 5, 7, 12, 23, 12, 4, 100, 0, 3, 5, 7}) {
        priorityQueue1.push(item);
    }

    cout << "Size: " << priorityQueue1.size() << endl;
    cout << "Top: " << priorityQueue1.top() << endl;

    display(priorityQueue1);
    priorityQueue1.pop();

    display(priorityQueue1);


}

void Test2() {
    cout << "\nTest2================================" << endl;

    priority_queue<Person> priorityQueue1;
    priorityQueue1.push(Person("F",10)); //constructor arguments
    priorityQueue1.push(Person("B",1)); //constructor arguments
    priorityQueue1.push(Person("C",14)); //constructor arguments
    priorityQueue1.push(Person("D",18)); //constructor arguments
    priorityQueue1.push(Person{"E",7}); //initializing syntax
    priorityQueue1.push(Person{"F",10}); //initializing syntax

    display(priorityQueue1);


}


int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();

    return 0;
}