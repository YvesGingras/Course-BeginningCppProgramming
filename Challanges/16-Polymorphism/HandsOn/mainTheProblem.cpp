#include <iostream>
//#include <memory>
using namespace std;


class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    void say_hello()  const {
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}


int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

    Base b;
    b.say_hello();

    Derived d;
    d.say_hello();

    greetings(b);
    greetings(d);

    Base *ptr = new Derived();
    ptr->say_hello();


//    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
//    ptr1->say_hello();

    unique_ptr<Base> uniquePtr = make_unique<Derived>();
    uniquePtr->say_hello();



    delete ptr;

    
    return 0;
}