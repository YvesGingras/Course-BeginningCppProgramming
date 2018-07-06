//
// Created by Yves Gingras on 18-06-25.
//

#ifndef INC_20_STL_PERSON_H
#define INC_20_STL_PERSON_H


#include <string>
using std::string;




class  Person
{
    string name;
    int age{};
public:



public:
    Person() = default;

    Person(string name, int age)
            : name(name), age(age) {}

    const string& GetName() const {
        return name;
    }

    void SetName(const string& name) {
        Person::name = name;
    }

    int GetAge() const {
        return age;
    }

    void SetAge(int age) {
        Person::age = age;
    }


    bool operator<(const Person& rhs) const {
        return this->age < rhs.age;
    }

    bool operator==(const Person& rhs) {
        return this->name == rhs.name &&
               this->age == rhs.age;
    }

};

#endif //INC_20_STL_PERSON_H
