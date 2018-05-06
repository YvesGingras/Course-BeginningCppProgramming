#include <iostream>
#include <cstring>
#include "MyString.h"

 // No-args constructor
MyString::MyString()
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
MyString::MyString(const char *s)
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
MyString::MyString(const MyString &source)
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
MyString::MyString( MyString &&source)
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
MyString::~MyString() {
    delete [] str;
}

 // Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
MyString &MyString::operator=( MyString &&rhs) {
//    std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


//Equality operator
bool MyString::operator==(const MyString& rhs) {
    return std::strcmp(this->str,rhs.str) == 0;
}

bool MyString::operator!=(const MyString& rhs) const {
    return std::strcmp(this->str, rhs.str) != 0;
}

//Relational operators
bool MyString::operator>(const MyString& rhs) const {
    return std::strcmp(this->str, rhs.str) > 0;
}

bool MyString::operator<(const MyString& rhs) {
    return std::strcmp(this->str,rhs.str) < 0;
}

//Unary '-' operator
MyString MyString::operator-() {
    auto buffer = new char[this->get_length() +1];
    std::strcpy(buffer,this->str);

    for (size_t i = 0; i < std::strlen(buffer); ++i) {
        buffer[i] = static_cast<char>(tolower(buffer[i]));
    }

    MyString result{buffer};
    delete[] buffer;

    return result;
}

MyString& MyString::operator++() {
    auto buffer = new char[this->get_length() + 1];
    std::strcpy(buffer,this->str);

    for (size_t i = 0; i < std::strlen(buffer); ++i) {
        buffer[i] = static_cast<char>(toupper(buffer[i]));
    }

    *this = buffer;
    delete [] buffer;

    return *this;
}

const MyString MyString::operator++(int) {
    MyString temp(*this);
    operator++();

    return temp;
}

//Overloaded concatenation operators
MyString MyString::operator+(const MyString& rhs) {
    auto buffer = new char[std::strlen(this->str) + std::strlen(rhs.str) + 1];
    std::strcpy(buffer,str);
    std::strcat(buffer,rhs.str);

    MyString result{buffer};
    delete[] buffer;

    return result;
}

MyString& MyString::operator+=(const MyString& rhs) {
    MyString result;
    result = *this + rhs;
    *this = result;

    return *this;
}

MyString MyString::operator*(int multiplier) {
    MyString result;
    for (size_t i = 0; i < multiplier; ++i) {
        result += this->str;
    }

    return result;
}

MyString& MyString::operator*=(int multiplier) {
    MyString tempResult;
    for (size_t i = 0; i < multiplier; ++i) {
        tempResult += *this;
    }
    *this = tempResult;

    return *this;
}

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, MyString &rhs) {
    auto*buff = new char[1000];
    in >> buff;
    rhs = MyString{buff};
    delete [] buff;
    return in;
}

// Display method
void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// getters
 size_t MyString::get_length() const { return strlen(str); }

 const char *MyString::get_str() const { return str; }

