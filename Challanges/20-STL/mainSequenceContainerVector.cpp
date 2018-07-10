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

void Test1() {
    cout << "\nTest1================================" << endl;

    vector<int> myVector {1, 2, 3, 4, 5};
    display(myVector);

    myVector = {2,4,5,6};
    display2(myVector);

    vector<int> myVector2 (10,100);
    display(myVector2);
}

void Test2() {
    cout << "\nTest2================================" << endl;

    vector<int> myVector {1, 2, 3, 4, 5};

    display(myVector);
    cout << "\nmyVector size: " << myVector.size() << endl;
    cout << "myVector max size: " << myVector.max_size() << endl;
    cout << "myVector capacity: " << myVector.capacity() << endl;

    cout << endl;
    myVector.push_back(6);
    display(myVector);
    cout << "myVector size: " << myVector.size() << endl;
    cout << "myVector max size: " << myVector.max_size() << endl;
    cout << "myVector capacity: " << myVector.capacity() << endl;

    myVector.shrink_to_fit(); // C++11
    display(myVector);
    cout << "\nmyVector size: " << myVector.size() << endl;
    cout << "myVector max size: " << myVector.max_size() << endl;
    cout << "myVector capacity (after 'shrink_to_fit'): " << myVector.capacity() << endl;

    myVector.reserve(100);
    display(myVector);
    cout << "\nmyVector size: " << myVector.size() << endl;
    cout << "myVector max size: " << myVector.max_size() << endl;
    cout << "myVector capacity (after '.reserve(100)'): " << myVector.capacity() << endl;

}

void Test3() {

    cout << "\nTest3================================" << endl;

    vector<int> myVector {1, 2, 3, 4, 5};

    display(myVector);

    myVector[0] = 100;
    myVector.at(1) = 200;

    display(myVector);
}

void Test4() {

    cout << "\nTest4================================" << endl;

    vector<Person> stooges;

    Person person {"Larry", 18};
    display(stooges);

    stooges.push_back(person);
    display(stooges);

    stooges.push_back(Person{"Moe",25});
    display(stooges);

    stooges.emplace_back("Curly",30);
    display(stooges);
}

void Test5() {

    cout << "\nTest5================================" << endl;

    vector<Person> stooges {
            {"Larry",18},
            {"Moe",25},
            {"Curly",30}
    };

    display(stooges);
    cout << "\nFront: " << stooges.front() << endl;
    cout << "Back: " << stooges.back() << endl;

    stooges.pop_back();
    display(stooges);
}

void Test6() {

    cout << "\nTest6================================" << endl;

    vector<int> myVector {1, 2, 3, 4, 5};
    display(myVector);

    myVector.clear();
    display(myVector);

    myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    display(myVector);

    myVector.erase(begin(myVector),begin(myVector) + 2);
    display(myVector);

    myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto myIterator = myVector.begin();
    while (myIterator != myVector.end()){
        if (*myIterator % 2 == 0)
            myVector.erase(myIterator);
        else
            myIterator++;
    }
    display(myVector);
}

void Test7() {

    cout << "\nTest7================================" << endl;

    vector<int> vector1 {1, 2, 3, 4, 5};
    vector<int> vector2 {10, 20, 30, 40, 50};
    display(vector1);
    display(vector2);
    cout << endl;

    vector2.swap(vector1);
    display(vector1);
    display(vector2);

}

void Test8() {

    cout << "\nTest8================================" << endl;

    vector<int> vector1 {1, 21, 3, 40, 12};
    display(vector1);

    sort(vector1.begin(),vector1.end());
    display(vector1);
}

void Test9() {
    // std::back_inserter contructs a back-insert iterator that inserts new elements
    // at the end of the container it applied to. It's a special output iterator
    // It's awesome!!!!   and  very efficient
    // There is also a front_inserter we can use with deques and lists
    // Copy one list to another using an iterator and back_inserter

    cout << "\nTest9================================" << endl;

    vector<int> vector1 {1, 2, 3, 4, 5};
    vector<int> vector2 {10, 20};

    display(vector1);
    display(vector2);
    cout << endl;

    copy(vector1.begin(),vector1.end(),back_inserter(vector2));
    display(vector1);
    display(vector2);
    cout << endl;

    // 'copy_if' the element is even.
    vector1 =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector2 = {10, 20};
    display(vector1);
    display(vector2);
    cout << endl;

    copy_if(vector1.begin(),vector1.end(),back_inserter(vector2),[](int x) { return x % 2 == 0;});
    display(vector1);
    display(vector2);
}

void Test10() {
    //transform over 2 ranges

    cout << "\nTest10================================" << endl;

    vector<int> vector1 {1, 2, 3, 4, 5};
    vector<int> vector2 {10, 20,30, 40, 50};
    vector<int> vector3;

    display(vector1);
    display(vector2);
    cout << endl;

    // 1*10, 2*20, 3*30, 4*40, 5*50 and store the results in vec3
    transform(vector1.begin(),vector1.end(),vector2.begin(),back_inserter(vector3),
              [](int x, int y) { return x * y;});

    display(vector3);
}

void Test11() {

    cout << "\nTest11================================" << endl;

    vector<int> vector1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> vector2 {100, 200,300, 400};

    display(vector1);
    display(vector2);
    cout << endl;

    auto iterator1 = find(vector1.begin(),vector1.end(),5);
    if (iterator1 != vector1.end()) {
        cout << "Inserting..." << endl;
        vector1.insert(iterator1,vector2.begin(),vector2.end());
    }
    else
      cout << "Sorry, 5 not found." << endl;

    display(vector1);
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();
    Test3();
    Test4();
    Test5();
    Test6();
    Test7();
    Test8();
    Test9();
    Test10();
    Test11();


    return 0;
}