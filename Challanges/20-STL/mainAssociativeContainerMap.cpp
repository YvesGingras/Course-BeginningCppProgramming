#include <iostream>
#include <map>
#include <set>
#include "Source/Person.h"

using namespace std;

template <typename T1, typename T2>
void display(const map<T1, T2>& myMap) {
    cout << "[ ";
    for (const auto& item : myMap) {
        cout << item.first << ":" << item.second << " ";
    }
    cout << "]" << endl;
}

void display(const map<string, set<int>> myMap) {
    cout << "[ ";
    for (const auto& item : myMap) {
        cout << item.first << ":[ ";
        for (const auto& setItem : item.second)
            cout << setItem << " ";
        cout << "] ";
    }
    cout << "]" << endl;
}

void Test1() {
    //maps
    cout << "\nTest1================================" << endl;

    map<string,int> map1 {
            {"Larry",3},
            {"Moe",1},
            {"Curly",2}
    };
     display(map1);

    map1.insert(pair<string,int>("Anna",10));
    display(map1);

    map1.insert(make_pair("Joe",5));
    display(map1);

    map1["Frank"] = 18;
    display(map1);

    map1["Frank"] += 10;
    display(map1);

    map1.erase("Frank");
    display(map1);

    cout << "Count for Joe: " << map1.count("Joe") << endl;
    cout << "Count for Frank: " << map1.count("Frank") << endl;

    auto map1Iterator = map1.find("Larry");
    if (map1Iterator != map1.end())
        cout << "Found: " << map1Iterator->first << ":" << (*map1Iterator).second << endl;

    map1.clear();
    display(map1);

}

void Test2() {
    //maps
    cout << "\nTest2================================" << endl;

    map<string,set<int>> grades {
        {"Larry",{100, 90}},
        {"Moe",{94}},
        {"Curly",{90, 80, 100}}
    };
     display(grades);

    grades["Larry"].insert(95);
    grades["Moe"].insert(75);
    display(grades);

    auto gradesIterator = grades.find("Moe");
    if (gradesIterator != grades.end()) {
        (*gradesIterator).second.insert(1000); //same as below...
//        gradesIterator->second.insert(1000);
    }
    display(grades);
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Test1();
    Test2();




    return 0;
}