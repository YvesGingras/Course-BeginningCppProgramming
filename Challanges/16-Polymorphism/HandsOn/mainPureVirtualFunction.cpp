#include <iostream>
#include <vector>

using namespace std;

class Shape {			// Abstract Base class
private:
    // attributes common to all shapes
public:
    virtual void draw() = 0;	 // pure virtual function
    virtual void rotate() = 0;   // pure virtual function
    virtual ~Shape() { }
};

class Open_Shape: public Shape {    // Abstract class
public:
    ~Open_Shape() override { }
};

class Closed_Shape : public Shape {  // Abstract class
public:
    ~Closed_Shape() override { };
};

class Line: public Open_Shape {     // Concrete class
public:
    void draw() override {
        std::cout << "Drawing a line" << std::endl;
    }

    void rotate() override {
        std::cout << "Rotating a line" << std::endl;
    }

    ~Line() override {}
};

class Circle: public Closed_Shape {     // Concrete class
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }

    void rotate() override {
        std::cout << "Rotating a circle" << std::endl;
    }

    ~Circle() override {}
};

class Square: public Closed_Shape {     // Concrete class
public:
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }

    void rotate() override {
        std::cout << "Rotating a square" << std::endl;
    }

    ~Square() override {}
};


void screen_refresh(const std::vector<Shape *> &shapes) {
    std::cout << "Refreshing" << std::endl;
    for (const auto p: shapes)
        p->draw();
}


int main() {
    cout << "Hello, 16-Polymorphism!" << endl;
    cout << "###########################" << endl<< endl;

//    Shape s;
//    Shape *p = new Shape();

//    Circle c;
//    c.draw();

//    Shape *ptr = new Circle();
//    ptr->draw();
//    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    std::vector<Shape *> shapes {s1,s2,s3};
//    for (const auto p: shapes)
//        p->draw();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;


    return 0;
}