#include <iostream>
#include <vector>
#include "Source/Item.h"
#include "Source/MyPair.h"

using namespace std;

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    Item<int> item1 {"Frank", 100};
    cout << item1.GetName() << " " << item1.GetValue() << endl;

    Item  <string> item2 {"Frank", "Professor"};
    cout << item2.GetName() << " " << item2.GetValue() << endl;

    Item <Item<string>> item3 {"Frank",  {"C++", "Professor"}};
    cout << item3.GetName() << " "
              << item3.GetValue().GetName() << " "
              << item3.GetValue().GetValue() << endl;

    cout << "\n================================" << endl;
    vector<Item<double>> vec {};
    vec.push_back (Item<double>("Larry", 100.0));
    vec.push_back (Item<double>("Moe", 200.0));
    vec.push_back (Item<double>("Curly",300.0));

    for (const auto &item: vec) {
        cout << item.GetName() << " " << item.GetValue() << endl;
    }

    cout << "\n================================" << endl;
    MyPair <string, int> p1 {"Frank", 100};
    MyPair <int, double> p2 {124, 13.6};

    cout << p1.first << ", " << p1.second << endl;
    cout << p2.first << ", " << p2.second << endl;


    return 0;
}