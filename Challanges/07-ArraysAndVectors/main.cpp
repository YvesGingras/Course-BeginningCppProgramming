#include <iostream>
#include <vector>
using namespace std;



int main() {
    cout << "Hello, Arrays & Vectors!" << endl;
    cout << endl;

    /*Vectors*/
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Vector 1 ===========================" << endl;
    cout << "Some properties value of vector 1: " << endl
            << "Qty of items: " << vector1.size() << endl
            << "There respective values are " << vector1.at(0) << ", " << vector1.at(1) << "." << endl;

    cout << endl;
    cout << "Vector 2 ===========================" << endl;
    cout << "Some properties value of vector 2: " << endl
             << "Qty of items: " << vector2.size() << endl
             << "There respective values are "
                << vector2.at(0) << ", "
                << vector2.at(1) << "."
                << endl;


    /*2D vectors*/
    vector<vector<int>> vector2D{};
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    cout << endl;
    cout << "Vector 2D ===========================" << endl;
    cout << "The values in vector2D are: " << endl
         << "Row 1 (vector1):" << endl
             << "   " << vector2D.at(0).at(0)
             << "   " << vector2D.at(0).at(1) << endl
         << "Row 2 (vector2):" << endl
             << "   " << vector2D.at(1).at(0)
             << "   " << vector2D.at(1).at(1)
         << endl;

    /*Editing vector1*/
    cout << endl;
    cout << "Editing vector1..." << endl;
    vector1.at(0) = 1000;

    /*Display*/
        //vector 2D
    cout << endl;
    cout << "Vector 2D ===========================" << endl;
    cout << "The values in vector2D are: " << endl
         << "Row 1:" << endl
         << "   " << vector2D.at(0).at(0)
         << "   " << vector2D.at(0).at(1) << endl
         << "Row 2:" << endl
         << "   " << vector2D.at(1).at(0)
         << "   " << vector2D.at(1).at(1)
         << endl;

        //vector1
    cout << endl;
    cout << "Vector 1 ===========================" << endl;
    cout << "Some properties value of vector 1: " << endl
         << "Qty of items: " << vector1.size() << endl
         << "There respective values are " << vector1.at(0) << ", " << vector1.at(1) << "." << endl;

    cout << "";
    
    return 0;
}