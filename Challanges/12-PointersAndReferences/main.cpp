#include <iostream>
#include <string>
#include <vector>
//#include <array>
#include "PointersAndReferences.h"

using namespace  std;
using namespace PointersAndReferences;


int main() {

    cout << "Hello, 12-Pointers!" << endl;
    cout << "***********************************\n"<<  endl;

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    const size_t sizeArray1 = sizeof(array1)/sizeof(array1[0]);
    const size_t sizeArray2 = sizeof(array2)/sizeof(array2[0]);

    cout << "Array1: ";
    PrintContent(array1,sizeArray1);

    cout << "Array2: ";
    PrintContent(array2,sizeArray2);


    int *result = ApplyAll(array1, sizeArray1, array2, sizeArray2);
    constexpr size_t resultSize{sizeArray1 * sizeArray2};

    cout << "Result: ";
    PrintContent(result, resultSize);

    delete [] result;

    return 0;
}
