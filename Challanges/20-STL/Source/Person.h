//
// Created by Yves Gingras on 18-06-25.
//

#ifndef INC_20_STL_PERSON_H
#define INC_20_STL_PERSON_H


#include <string>
#include <ostream>

using std::string;
using std::ostream;

class  Person
{
    friend ostream& operator<<(ostream& ostream, const Person& person);
    string name;
    int age{};

public:
    Person() : name {"Unknown"}, age {0} {}

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

ostream& operator<<(ostream& ostream, const Person& person) {
    ostream << person.name << ":" << person.age;
    return ostream;
}


#endif //INC_20_STL_PERSON_H
