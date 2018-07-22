#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <vector>
#include "Source/Person.h"

using namespace std;

template <typename T>
void display(const list<T>& myList) {
    cout << "[ ";
    for (const auto& item : myList) {
        cout << item << " ";
    }
    cout << "]" << endl;
}

void display2(const vector<int>& myVector) {
    cout << "[ ";
    for_each(myVector.begin(),myVector.end(), [](int x){cout << x << " ";});
    cout << "]" << endl;
}

void Test1() {
    cout << "\nTest1================================" << endl;

    list<int> list1 {1, 2, 3, 4, 5};
    display(list1);

    list<string> list2;
    list2.push_back("Back");
    list2.push_front("Front");
    display(list2);

    list<int> list3;
    list3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list3);

    list<int> list4(10,100);
    display(list4);

}

void Test2() {
    cout << "\nTest2================================" << endl;

    list<int> list1;
    list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list1);

    cout << "Size: " << list1.size() << endl;

    cout << "Front: " << list1.front() << endl;
    cout << "Back: " << list1.back() << endl;

    list1.clear();
    display(list1);
    cout << "Size: " << list1.size() << endl;



}

void Test3() {
    cout << "\nTest3================================" << endl;

    list<int> list1;
    list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list1);

    list1.resize(5);
    display(list1);

    list1.resize(10);
    display(list1);

    list<Person> persons;
    persons.resize(5);
    display(persons);



}

void Test4() {
    cout << "\nTest4================================" << endl;

    list<int> list1;
    list1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(list1);

    auto iterator1 = find(list1.begin(),list1.end(),5);
    if (iterator1 != list1.end())
        list1.insert(iterator1, 100);

    display(list1);

    list<int> list2 {1000, 2000, 3000};
    list1.insert(iterator1, list2.begin(),list2.end());
    display(list1);

    cout << *iterator1 <<endl;
    advance(iterator1,-4);
    cout << *iterator1 <<endl;

    list1.erase(iterator1); //invalidates the iterator.
    display(list1);
}

void Test5() {
    cout << "\nTest5================================" << endl;

    list<Person> stooges {
            {"Larry",18},
            {"Moe",25},
            {"Curly",17}
    };

    display(stooges);

    string name{};
    int age{};

    cout << "\nEnter the name of the next stooge: ";
    getline(cin,name);

    cout << "Enter his age: ";
    cin >> age;

    cout << endl;
    stooges.emplace_back(name,age);
    display(stooges);

    //insert Frank before Moe
    auto iterator1 = find(stooges.begin(),stooges.end(),Person{"Moe", 25});
    if (iterator1 != stooges.end())
        stooges.emplace(iterator1,"Frank",18);

    display(stooges);
}

void Test6() {
    cout << "\nTest6================================" << endl;

    list<Person> stooges {
            {"Larry",18},
            {"Moe",10},
            {"Curly",30}
    };

    display(stooges);

    stooges.sort();
    display(stooges);

}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();


    return 0;
}