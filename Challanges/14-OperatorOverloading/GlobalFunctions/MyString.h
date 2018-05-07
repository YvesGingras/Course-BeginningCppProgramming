#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <ostream>

class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

    //Overloaded operators member methods
    friend MyString operator-(const MyString& source);
    friend MyString operator+(const MyString& lhs, const MyString& rhs);
    friend bool operator==(const MyString& lhs,const MyString& rhs);
    friend bool operator!=(const MyString& lhs, const MyString& rhs);
    friend bool operator<(const MyString& lhs, const MyString& rhs);
    friend bool operator>(const MyString& lhs,const MyString& rhs);
    friend MyString& operator+=(MyString& lhs, const MyString& rhs);
    friend MyString operator*(const MyString& lhs, int multiplier);
    friend MyString& operator*=(MyString& lhs, int multiplier);
    friend MyString& operator++(MyString& source);
    friend const MyString operator++(MyString& source, int);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    MyString();                                                         // No-args constructor
    MyString(const char *s);                                     // Overloaded constructor
    MyString(const MyString &source);                    // Copy constructor
    MyString( MyString &&source);                         // Move constructor
    ~MyString();                                                     // Destructor
    
    MyString &operator=(const MyString &rhs);     // Copy assignment
    MyString &operator=(MyString &&rhs);           // Move assignment

    void display() const;
    
    size_t get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_