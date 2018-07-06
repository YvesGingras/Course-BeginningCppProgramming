//
// Created by Yves Gingras on 18-06-21.
//

#ifndef INC_20_STL_MYARRAY_H
#define INC_20_STL_MYARRAY_H

#include <iostream>

//region using declarations
using std::ostream;
using  std::cout;
using std::endl;
//endregion

 /**
 * @brief BlaBla class.
 * @tparam N
 */
template <typename T, int N>
class MyArray
{
    int size{N};
    T values[N]{};

    /**
     * @brief BlaBla '<<' operator.
     * @param os
     * @param array
     * @return
     */
    friend ostream& operator<<(ostream& os, const MyArray<T, N>& array){
        os << "[ ";
        for (auto& value : array.values)
            os << value << " ";

        os << "]" << endl;

        return os;
    }

public:
    MyArray() = default;
    MyArray(T initialValue) {
        for (auto& item : values) {
            item = initialValue;
        }
    }

    void Fill(T value) {
        for (auto& item : values) {
            item = value;
        }
    }

    int GetSize() const {
        return size;
    }

    T& operator[](int index) {
        return values[index];
    }
};

#endif //INC_20_STL_MYARRAY_H
