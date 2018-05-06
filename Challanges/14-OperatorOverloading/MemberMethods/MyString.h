#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &in, MyString &rhs);

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


    //Overloaded operators member methods
    MyString operator-() const;
    MyString operator+(const MyString& rhs) const;
    bool operator==(const MyString& rhs) const;
    bool operator!=(const MyString& rhs) const;
    bool operator<(const MyString& rhs) const;
    bool operator>(const MyString& rhs) const;
    MyString& operator+=(const MyString& rhs);
    MyString operator*(int multiplier) const;
    MyString& operator*=(int multiplier);
    MyString& operator++();
    const MyString operator++(int);

    void display() const;
    
    size_t get_length() const;                                      // getters
    const char *get_str() const;
};

#endif // _MYSTRING_H_