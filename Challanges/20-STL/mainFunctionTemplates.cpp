#include <iostream>
using namespace std;

template <class T>
T MyMin(T a, T b){
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

template <typename T1, typename T2>
void Func(T1 a, T2 b) {
    cout << a << " " << b << endl;
};

template <typename T>
void MySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

struct Person
{
public:
    string name;
    int age;

    bool operator <(const Person& rhs) const {
        return this->age < rhs.age;
    }
};

ostream& operator << (ostream& os, const Person& p){
    os << p.name;
    return os;
}

int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    auto x {string{"Yves"}};
    auto y {string{"yves"}};

    cout << x << "," << y << endl;
    MySwap(x,y);
    cout << x << "," << y << endl;


    Person p1{"Curly", 50};
    Person p2{"Moe", 30};

    Person p3 = MyMin(p1 ,p2);
    cout << p3.name << " is younger." << endl;

    cout << "The names of the persons:" << endl;
    Func(p1, p2);

    cout << MyMin<int>(2,3) << endl;        // 2
    cout << MyMin(2,3) << endl;                 // 2
    cout << MyMin('A', 'B') << endl;            // A
    cout << MyMin(12.5, 9.2) << endl;        // 9.2
    cout << MyMin(5+2*2, 7+40) << endl; // 9

    Func<int,int>(10,20);
    Func(10,20);
    Func<char, double>('A', 12.4);
    Func('A', 12.4);
    Func(1000, "Testing");
    Func(2000, string{"Frank"});

    return 0;
}