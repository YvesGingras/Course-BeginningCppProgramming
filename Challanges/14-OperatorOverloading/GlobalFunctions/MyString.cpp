
#include <iostream>
#include <cstring>
#include "MyString.h"

using namespace std;

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
 //       cout << "Copy constructor used" << endl;

}

// Move constructor
MyString::MyString( MyString &&source)
    :str(source.str) {
        source.str = nullptr;
//        cout << "Move constructor used" << endl;
}

 // Destructor
MyString::~MyString() {
    delete [] str;
}

 // Copy assignment
MyString &MyString::operator=(const MyString &rhs) {
//    cout << "Using copy assignment" << endl;

    if (this == &rhs)
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
MyString &MyString::operator=( MyString &&rhs) {
//    cout << "Using move assignment" << endl;
    if (this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Overloaded operators global functions
MyString operator-(const MyString& source) {
    auto buffer = new char[strlen(source.str) +1];
    strcpy(buffer, source.str);

    for (size_t i = 0; i < strlen(buffer); ++i) {
        buffer[i] = static_cast<char>(tolower(buffer[i]));
    }

    MyString result{buffer};
    delete[] buffer;

    return result;
}

MyString operator+(const MyString& lhs, const MyString& rhs) {
    auto buffer = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buffer,lhs.str);
    strcat(buffer,rhs.str);

    MyString result{buffer};
    delete[] buffer;

    return result;
}

bool operator==(const MyString& lhs,const MyString& rhs) {
    return strcmp(lhs.str,rhs.str) == 0;
}

bool operator!=(const MyString& lhs, const MyString& rhs) {
    return strcmp(lhs.str, rhs.str) != 0;
}

bool operator<(const MyString& lhs, const MyString& rhs) {
    return strcmp(lhs.str,rhs.str) < 0;
}

bool operator>(const MyString& lhs,const MyString& rhs) {
    return strcmp(lhs.str, rhs.str) > 0;
}

MyString& operator+=(MyString& lhs, const MyString& rhs) {
    return lhs = lhs + rhs;;
}

MyString operator*(const MyString& lhs, int multiplier) {
    MyString result;
    for (size_t i = 0; i < multiplier; ++i) {
        result += lhs;
    }

    return result;
}

MyString& operator*=(MyString& lhs, int multiplier) {
    return lhs = lhs * multiplier;
}

MyString& operator++(MyString& source) {
    for (size_t i = 0; i < strlen(source.str); ++i) {
        source.str[i] = static_cast<char>(toupper(source.str[i]));
    }

    return source;
}

const MyString operator++(MyString& source, int) {
    MyString temp(source);
    ++source; // same as: operator++(source);

    return temp;
}

// overloaded insertion operator
ostream &operator<<(ostream &os, const MyString &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
istream &operator>>(istream &in, MyString &rhs) {
    auto*buff = new char[1000];
    in >> buff;
    rhs = MyString{buff};
    delete [] buff;
    return in;
}

// Display method
void MyString::display() const {
    cout << str << " : " << get_length() << endl;
}

// getters
 size_t MyString::get_length() const { return strlen(str); }
 const char *MyString::get_str() const { return str; }



