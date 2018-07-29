#include <iostream>
#include <stack>
#include <vector>
#include <list>

using namespace std;

// Note that the stack is passed in by value so we
// don't affect the passed in stack.
template <typename T>
void display(stack<T> myStack) {
    cout << "[ ";
    while (!myStack.empty()) {
        T element = myStack.top();
        myStack.pop();
        cout << element << " ";
    }
    cout << "]" << endl;
}



int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    stack<int> stack1;
    stack<int,vector<int>> stack2;
    stack<int, list<int>> stack3;
    stack<int , deque<int>> stack4;

    for (const auto item : {1, 2, 3, 4, 5})
        stack1.push(item);
    display(stack1);

    stack1.push(100);
    display(stack1);

    stack1.pop();
    stack1.pop();
    display(stack1);

    while (!stack1.empty())
        stack1.pop();
    display(stack1);

    cout << "Size: " << stack1.size() << endl;

    stack1.push(10);
    display(stack1);


    stack1.top() = 100;
    display(stack1);


    return 0;
}