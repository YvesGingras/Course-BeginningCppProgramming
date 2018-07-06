//
// Created by Yves Gingras on 18-06-21.
//

#ifndef CHALLANGES_ITEM_H
#define CHALLANGES_ITEM_H

#include <string>
using std::string;

/**
 * @brief
 */
template <typename T>
class Item
{
private:
    string name;
    T value{};

public:
    Item(string name, T value)
            : name(name), value(value)
    {}

    string GetName() const {
        return name;
    }


    T GetValue() const {
        return value;
    }

};



#endif //CHALLANGES_ITEM_H
