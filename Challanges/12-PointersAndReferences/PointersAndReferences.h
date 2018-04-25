//
// Created by Yves Gingras on 18-04-25.
//

#include <array>
using namespace std;

namespace PointersAndReferences
{
    int *ApplyAll(const int *const array1, size_t sizeArray1, const int *const array2, size_t sizeArray2) {
        int *newArray{nullptr};

        newArray = new int[sizeArray1 * sizeArray2];

        size_t counter{0};
        for (size_t i = 0; i < sizeArray2; ++i) {
            for (size_t j = 0; j < sizeArray1 ; ++j) {
                *(newArray + counter) = array2[i] * array1[j]; // using 'pointer-offset notation'.
                ++counter;
            }
        }

        return newArray; //thus, returning the address of the 1st element of the array...
    }

    void PrintContent(const int *const content, size_t size) {
        cout << "\n[ ";

        for (size_t i{0}; i < size; ++i)
            cout << content[i] << " ";         //using 'pointer-subscript notation' **

        cout << "]\n" << endl;
    }
}
