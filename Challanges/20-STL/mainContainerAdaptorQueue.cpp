#include <iostream>
#include <queue>


using namespace std;

template <typename T>
void display(queue<T> myQueue) {
    cout << "[ ";
    while (!myQueue.empty()) {
        T element = myQueue.front();
        myQueue.pop();
        cout << element << " ";
    }
    cout << "]" << endl;
}



int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    queue<int> queue1;

    for (const auto& item : {1, 2, 3, 4, 5})
        queue1.push(item);
    display(queue1);

    cout << "Front: " << queue1.front() << endl;
    cout << "Back: " << queue1.back() << endl;

    queue1.push(100);
    display(queue1);

    cout << "\nPopping twice..." << endl;
    queue1.pop();
    queue1.pop();
    display(queue1);

    cout << "\nClearing the queue..." << endl;
    while (!queue1.empty())
        queue1.pop();
    display(queue1);

    cout << "Size: " << queue1.size() << endl;

    cout << "\nAdding new items to the queue..." << endl;
    queue1.push(10);
    queue1.push(100);
    queue1.push(1000);
    display(queue1);

    cout << "\nModifying queue front & back items value..." << endl;
    queue1.front() = 5;
    queue1.back() = 5000;
    display(queue1);

    cout << "\nFront: " << queue1.front() << endl;
    cout << "Back: " << queue1.back() << endl;


    return 0;
}