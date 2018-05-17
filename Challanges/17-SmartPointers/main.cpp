#include <iostream>
#include <vector>
#include<memory>

using namespace std;

class Test {
private:
    int data;
public:
    Test() : data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }

    Test(int data) : data {data} {
        cout << "\tTest constructor (" << data << ")" << endl;
    }

    ~Test() {cout << "\tTest destructor (" << data << ")" << endl; }

    int get_data() const {
        return data;
    }
};

// Function prototypes
unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>>&vec);

//Functions definitions
unique_ptr<vector<shared_ptr<Test>>> make(){
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num){
    for (int i = 1; i < num + 1; ++i) {
        int dataPoint;
        cout << "Enter data point [" << i << "] : ";
        cin >> dataPoint;
        vec.push_back(make_shared<Test>(dataPoint));
        cout << "";
    }
}

void display(const vector<shared_ptr<Test>>&vec){
    cout << "\nDisplaying vector data" << endl;
    cout << "======================" << endl;
    for (auto& sharedPtr : vec)
        cout << sharedPtr->get_data() << endl;
    cout << "======================" << endl;

}

int main() {
    cout << "Hello, Smart Pointers!" << endl;
    cout << "###########################" << endl<< endl;

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}