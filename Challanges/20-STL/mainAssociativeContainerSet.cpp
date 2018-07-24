#include <iostream>
#include <vector>
#include <set>
#include "Source/Person.h"

using namespace std;

template <typename T>
void display(const set<T>& mySet) {
    cout << "[ ";
    for (const auto& item : mySet) {
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

    set<int> set1 {1, 4, 3, 5, 2};
    display(set1);


    set1 = {1, 2, 3, 1, 1, 2, 2, 3, 3, 4, 5};
    display(set1);

    set1.insert(0);
    set1.insert(10);
    display(set1);

    if (set1.count(10))
        cout << "10 is in the set." << endl;
    else
        cout << "10 is in NOT the set." << endl;

    auto setIterator1 = set1.find(5);
    if (setIterator1 != set1.end())
        cout << "Found: " << *setIterator1 << endl;

    set1.clear();
    display(set1);

}

void Test2() {
    cout << "\nTest2================================" << endl;

    set<Person> stooges {
            {"Larry",1},
            {"Moe",2},
            {"Curly",3}
    };
    display(stooges);

    stooges.emplace("James",50);
    display(stooges);

    stooges.emplace("Frank",50);
    display(stooges);

    auto setIterator1 = stooges.find(Person{"Moe",2});
    if (setIterator1 != stooges.end())
        stooges.erase(setIterator1);
    display(stooges);

    setIterator1 = stooges.find(Person{"XXXX", 50});
    if (setIterator1 != stooges.end())
        stooges.erase(setIterator1);
    display(stooges);


}

void Test3() {
    cout << "\nTest3================================" << endl;

    set<string> set1 {"A", "B", "C"};
    display(set1);

    auto result = set1.insert("D");
    display(set1);

    cout << boolalpha;
    cout << "first: " << *(result.first) << endl;
    cout << "second: " << result.second << endl;
    cout << endl;

    result = set1.insert("A");
    display(set1);

    cout << boolalpha;
    cout << "first: " << *(result.first) << endl;
    cout << "second: " << result.second << endl;
    cout << endl;

}


int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();
    Test3();



    return 0;
}