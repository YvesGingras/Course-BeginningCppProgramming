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

    size_t sizeArray1 = sizeof(array1)/sizeof(array1[0]);
    size_t sizeArray2 = sizeof(array2)/sizeof(array2[0]);

    int *result = ApplyAll(array1, sizeArray1, array2, sizeArray2);
    PrintContent(result, sizeArray1 * sizeArray2);
    delete [] result;

    return 0;
}
