#include <iostream>
using namespace std;

class Base {
public:
    virtual void say_hello() const {
        cout << "Hello - I'm a Base class object" << endl;
    }
    virtual ~Base() = default;
};

class Derived: public Base {
public:
    void say_hello() const override {             // Notice I forgot the const
        cout << "Hello - I'm a Derived class object" << endl;
    }
     ~Derived() override = default;
};

int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

    auto* p1 = new Base();      // Base::say_hello()
    p1->say_hello();

    auto* p2 = new Derived();    // Derived::say_hello()
    p2->say_hello();

    Base* p3 = new Derived();   //  Base::say_hello()   ?????   I wanted Derived::say_hello()
    p3->say_hello();

    return 0;
}