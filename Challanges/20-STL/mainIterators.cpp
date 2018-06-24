#include <iostream>
#include <vector>
#include <set>
#include<map>
#include<list>

using namespace std;

// display any vector of integers using range-based for loop
void display(const vector<int> &vec) {
    cout << "[ ";
    for (auto const &i: vec) {
        cout << i << " ";
    }
    cout << "]" << endl;
}



void test1() {
    cout << "\n=========================================" << endl;
    vector<int> nums1 {1, 2, 3, 4, 5};
    auto iterator = nums1.begin();
    cout << *iterator << endl;

    iterator++;
    cout << *iterator << endl;

    iterator+= 2;
    cout << *iterator << endl;

    iterator-= 2;
    cout << *iterator << endl;

    iterator = nums1.end() -1;
    cout << *iterator << endl;
}

void test2() {
    cout << "\n=========================================" << endl;
    vector<int> nums1 {1, 2, 3, 4, 5};

    vector<int>::iterator iterator = nums1.begin();
    while (iterator != nums1.end()) {
        cout << *iterator << endl;
        iterator++;
    }

    iterator = nums1.begin();
    while (iterator != nums1.end()) {
        *iterator = 0;
        iterator++;
    }

    display(nums1);
}

void test3() {
    cout << "\n=========================================" << endl;
    vector<int> nums1 {1, 2, 3, 4, 5};


    auto iterator = nums1.cbegin(); // equivalent of following line...
//    vector<int>::const_iterator iterator = nums1.begin();

    while (iterator != nums1.end()) {
        cout << *iterator << endl;
        iterator++;
    }

    iterator = nums1.begin();
    while (iterator != nums1.end()) {
        // iterator = 0; //compiler error
        iterator++;
    }

    display(nums1);
}

void test4() {
    cout << "\n=========================================" << endl;
    vector<int> myVector {1, 2, 3, 4, 5};
    auto iteraror1 = myVector.rbegin();

    while (iteraror1 != myVector.rend()) {
        cout << *iteraror1 << endl;
        iteraror1++;
    }

    //const reverse iterator over a list.
    list<string> names {"Larry", "Moe", "Curly"};
    auto iterator2 = names.crbegin(); // iterator over a list of strings, point to Curly.
    cout << *iterator2 << endl;

    iterator2++; //points to Moe.
    cout << *iterator2 << endl;

    //iterator over a map.
    map<string, string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "C#"}
    };

    auto iterator3 = favorites.begin();
    while (iterator3 != favorites.end()) {
        cout << iterator3->first << " : " << iterator3->second << endl;
        iterator3++;
    }

}

void test5() {
    cout << "\n=========================================" << endl;
    vector<int> myVector {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto start = myVector.begin() + 2;
    auto finish = myVector.end() -3;

    while (start != finish) {
        cout << *start << endl;
        start++;
    }


}




int main() {
    cout << "\nHello, 20-STL!\n" << endl;
//    test1();
//    test2();
//    test3();
//    test4();
    test5();

    return 0;
}