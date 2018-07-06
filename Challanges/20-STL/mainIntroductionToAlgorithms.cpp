#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <cctype>
#include "Source/Person.h"

using namespace std;

void FindTest() {
    cout << "\n=============================" << endl;


    //region 'integer' with 'vector'.
    vector<int> myVector {1, 2, 3, 4, 5};
    //cal to the STL
    auto loc = find(begin(myVector), myVector.end(),1); //using 2 different ways to define the iterators.

    if (loc != end(myVector))
        cout << "Found the number " << *loc << "." << endl;
    else
        cout << "Couldn't find the number." << endl;
    //endregion

    //region Players objects with 'list'.
    list<Person> players {
        {"Larry",18},
        {"Moe", 20},
        {"Curly", 21}
    };

    //call to the STL
    auto loc1 = find(players.begin(),players.end(), Person{"Moe",20});

    if (loc1 != players.end())
        cout << "Found Moe." << endl;
    else
        cout << "Moe not found." << endl;
    //endregion
}

void CountTest() {
    cout << "\n=============================" << endl;


    //region 'integer' with 'vector'.
    vector<int> myVector {1, 2, 3, 4, 5, 1, 2, 1};

    int num = static_cast<int>(count (myVector.begin(), myVector.end(), 10));
    cout << num << " occurence(s) found" << endl;

}

void CountIfTest() {
    cout << "\n=============================" << endl;


    //region 'integer' with 'vector'.
    vector<int> myVector {1, 2, 3, 4, 5, 1, 2, 1, 100};

    int num = static_cast<int>(count_if(myVector.begin(), myVector.end()
            , [](int x) { return x % 2 == 0;}));
    cout << num << " even number(s) found" << endl;

    num = static_cast<int>(count_if(myVector.begin(), myVector.end(), [](int x) { return x % 2 != 0; }));
    cout << num << " odd number(s) found" << endl;

    num = static_cast<int>(count_if(myVector.begin(), myVector.end(), [](int x) { return x >= 5; }));
    cout << num << " number(s) are greater than 5." << endl;
}

void ReplaceeTest() {
    cout << "\n=============================" << endl;


    //region 'integer' with 'vector'.
    vector<int> myVector {1, 2, 3, 4, 5, 1, 2, 1};

    for (auto&& item : myVector)
        cout << item << " ";
    cout << endl;

    replace(begin(myVector),myVector.end(), 1, 100);
    for (auto&& item : myVector)
        cout << item << " ";
    cout << endl;
}

void AllOfTest() {
    cout << "\n=============================" << endl;


    //region 'integer' with 'vector'.
    vector<int> myVector {1, 3, 5, 7, 9, 1, 13, 19 ,5};

    if (all_of(begin(myVector),myVector.end(), [](int x) { return x > 10;}))
        cout << "All elements are > 10" << endl;
    else
        cout << "Not all elements are > 10" << endl;

    if (all_of(begin(myVector),end(myVector), [](int x) { return x < 20;}))
        cout << "All elements are < 20" << endl;
    else
        cout << "Not all elements are < 20" << endl;
}

void StringTransform() {
    cout << "\n=============================" << endl;

    string myString {"This is a test."};
    cout << "Before transform: " << myString << endl;

    transform(myString.begin(),end(myString),myString.begin(),::toupper);
    cout << "After transform: " << myString << endl;
}


int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    FindTest();
    CountTest();
    CountIfTest();
    ReplaceeTest();
    AllOfTest();
    StringTransform();


    return 0;
}