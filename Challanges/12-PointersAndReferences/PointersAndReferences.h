//
// Created by Yves Gingras on 18-04-25.
//

#include <array>
using namespace std;

namespace PointersAndReferences
{
    int *ApplyAll(const int array1[], size_t sizeArray1, const int array2[], size_t sizeArray2) {
        int *newStorage{nullptr};

        newStorage = new int[sizeArray1 * sizeArray2];

        size_t counter{0};
        for (size_t i = 0; i < sizeArray2; ++i) {
            for (size_t j = 0; j < sizeArray1 ; ++j) {
                *(newStorage + counter) = array2[i] * array1[j];
                ++counter;
            }
        }

        return newStorage;
    }

    void PrintContent(const int *content, size_t size) {
        cout << "The content of the alocated memory storage is :"
                << "\n[ ";

        for (int i = 0; i < size; ++i) {
            cout << content[i] << " ";
        }

        cout << "]" << endl;
    }
}
