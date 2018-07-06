#include <iostream>
#include "Source/Person.h"
#include <array>
#include <numeric>


using namespace std;

// Display the array -- note the size MUST be included
// when passing a std::array to a function
void display(const std::array<int, 5> &array) {
    std::cout << "[ ";
    for (const auto &i: array)
        std::cout << i << " ";
    std::cout <<  "]"<< std::endl;
}


void test1() {
    cout << "\nTest1================================" << endl;

    array<int, 5> array1{1, 2, 3, 4, 5};
    array<int, 5> array2;

    display(array1);
    display(array2);

    array2 = {10, 20, 30, 40, 50};

    display(array1);
    display(array2);

    cout << "Size of the array1 is: " << array1.size() << endl;
    cout << "Size of the array2 is: " << array2.size() << endl;

    array1[0] = 1000; // no bounce checking
    array1.at(1) = 2000;
    display(array1);

    cout << "Front of array2: " << array2.front() << endl;
    cout << "Back of array2: " << array2.back() << endl;

}

void test2() {
    cout << "\nTest2================================" << endl;

    array<int, 5> array1{1, 2, 3, 4, 5};
    array<int, 5> array2 {10, 20, 30, 40, 50};


    display(array1);
    display(array2);

    array1.fill(0);

    display(array1);
    display(array2);

    array1.swap(array2);

    display(array1);
    display(array2);


}

void test3() {
    cout << "\nTest3================================" << endl;

    array<int, 5> array1{1, 2, 3, 4, 5};

    int* pointer = array1.data();
    cout << pointer << endl;
    *pointer = 1000;


    display(array1);


}

void test4() {
    cout << "\nTest4================================" << endl;

    array<int, 5> array1{2, 1, 4, 5, 3};
    display(array1);

    sort(begin(array1), end(array1));
    display(array1);


}

void test5() {
    cout << "\nTest5================================" << endl;

    array<int, 5> array1{2, 1, 4, 5, 3};
    array<int ,5>::iterator minNum =  min_element(array1.begin(),array1.end());
    auto maxNum = max_element(array1.begin(),array1.end());

    cout << "Min: " << *minNum << " , Max: " << *maxNum << endl;

}

void test6() {
    cout << "\nTest6================================" << endl;

    array<int, 5> array1{2, 1, 3, 3, 5};
    auto adjacent = adjacent_find(array1.begin(), array1.end());


    if (adjacent != array1.end())
        cout << "Adjacent element found with value: " << *adjacent << endl;
    else
        cout << "No adjacent elements found." << endl;
}

void test7() {
    cout << "\nTest7================================" << endl;

    array<int, 5> array1{1, 2, 3, 4, 5};
    int sum = accumulate(array1.begin(),array1.end(),0);
    cout << "Sum of the elements in array1 is: " << sum << endl;
}

void test8() {
    cout << "\nTest8================================" << endl;

    array<int, 10> array1{1, 2, 3, 1, 2, 3, 3, 3, 3, 3};

    long qtyFound = count(array1.begin(),array1.end(),3);
    cout << "Number '3' was found " << qtyFound << " times." << endl;
}

void test9 () {
    cout << "\nTest8================================" << endl;

    array<int, 10> array1{1, 2, 3, 50, 60, 70, 80, 200, 300, 400};

    //find how many numbers are between 10 and 200
    long qytFound = count_if(array1.begin(),array1.end()
                            ,[](int x) { return x > 10 && x <200;});

    cout << qytFound << " numbers where found between 10 & 200." << endl;

}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();


    return 0;
}