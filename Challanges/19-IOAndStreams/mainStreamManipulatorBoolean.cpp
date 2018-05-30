#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    cout << "\nHello, 19-I/O and Streams!" << endl;
    cout << "#############################" << endl<< endl;

    cout << "noboolalpha - default  (10 == 10) : " << (10 == 10)  << endl;
    cout << "noboolalpha - default  (10 == 20) : " << (10 == 20)  << endl;

    cout << "\nSet to true/false formatting" << endl;
    cout << boolalpha;    // change to true/false
    cout << "boolalpha   (10 == 10) : " << (10 == 10)  << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20)  << endl;

    cout << "\nSetting still stays for future boolean insertions" << endl;
    cout << "boolalpha   (10 == 10) : " << (10 == 10)  << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20)  << endl;

     cout <<  "\nToggle to 0/1" << endl;
    cout << noboolalpha;
    cout << "noboolalpha  (10 == 10) : " << (10 == 10)  << endl;
    cout << "noboolalpha  (10 == 20) : " << (10 == 20)  << endl;

    //Using methods instead of manipulators.
    cout << "\nSet back to true/false using setf method" << endl;
    cout.setf(ios::boolalpha);
    cout << "boolalpha   (10 == 10) : " << (10 == 10)  << endl;
    cout << "boolalpha   (10 == 20) : " << (10 == 20)  << endl;

    cout << "\nresets to default using 'resetiosflags' which is 0/1" << endl;
    cout << resetiosflags(ios::boolalpha);
    cout << "Default  (10 == 10) : " << (10 == 10)  << endl;
    cout << "Default  (10 == 20) : " << (10 == 20)  << endl;


    return 0;
}