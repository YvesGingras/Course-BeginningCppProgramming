#include <iostream>
#include<memory>
using namespace std;

/*
class Test {
private:
public:
    int data;
    Test() : data{0} { cout << "\tTest constructor (" << data << ")" << endl; }
    Test(int data) : data {data} { cout << "\tTest constructor (" << data << ")" << endl; }
    int get_data() const {return data; }
    ~Test() {cout << "\tTest destructor (" << data << ")" << endl; }
};

void my_deleter(Test *ptr) {
    cout << "\tUsing my custom function deleter" << endl;
    delete ptr;
}
*/

class Test {
private:
    int data;
public:
    Test() : data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }

    Test(int data) : data {data} {
        cout << "Test constructor (" << data << ")" << endl;
    }

    ~Test() {cout << "Test destructor (" << data << ")" << endl; }

    int get_data() const {
        return data;
    }
};

void PointerDeleter(Test* pointer){
    cout << "Using the 'PointerDeleter' function." << endl;
    delete pointer;
}

int main() {
    cout << "Hello, Smart Pointers!" << endl;
    cout << "###########################" << endl<< endl;

    {
        // Using a function
        shared_ptr<Test> ptr1 {new Test{100}, PointerDeleter};
    }

    cout << "====================" << endl;
    {
        // Using a Lambda expression
        shared_ptr<Test> ptr2 (new Test{1000},
                                    [] (Test *ptr)  {
                                        cout << "\tUsing my custom lamdba deleter" << endl;
                                        delete ptr;
                                    });
    }
    cout << "====================" << endl;

    {
        shared_ptr<Test> ptr3 (new Test{2000},
                                [] (Test *ptr){
                                    cout << "\tUsing another custom lambda deleter" << endl;
                                    delete ptr;
                                });
    }

    return 0;
}
