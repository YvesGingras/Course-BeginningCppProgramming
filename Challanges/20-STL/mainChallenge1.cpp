#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

template <typename T>
void display(const vector<T>& myVector) {
    cout << "[ ";
    for (const auto& item : myVector) {
        cout << item << " ";
    }
    cout << "]" << endl;
}

void display2(const vector<int>& myVector) {
    cout << "[ ";
    for_each(myVector.begin(),myVector.end(), [](int x){cout << x << " ";});
    cout << "]" << endl;
}

vector<string> TestStringFactory() {

    return vector<string> { "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
}

bool is_palindrome(const string& s)
{
    deque<char> tempString;
    for (auto&& character : s) {
        if (isalpha(character)) {
            tempString.push_back(static_cast<char>(toupper(character)));
        }
    }

    //false if back and front characters (2 by 2) are not the same.
    char frontChar{};
    char backChar{};

    while (tempString.size() > 1) {
        frontChar = tempString.front();
        backChar = tempString.back();

        tempString.pop_front();
        tempString.pop_back();

        if (frontChar != backChar)
            return false;
    }
    return true;
}

bool is_palindromeYG(const string& s)
{
    string tempString {};
    string tempStringReverse {};
    deque<char> dequeStringReverse;

    for (auto&& character : s) {
        if (!ispunct(character) && !isspace(character))
            tempString.push_back(static_cast<char>(toupper(character)));// += character;
    }

    copy(tempString.begin(),tempString.end(),front_inserter(dequeStringReverse));
    for (auto&& character : dequeStringReverse)
        tempStringReverse += character;

    return tempString == tempStringReverse;
}


int main() {
    cout << "\nHello, 20-STL!\n" << endl;

    vector<string> test_strings = TestStringFactory();

    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;

    for(const auto& s : test_strings) {
        is_palindrome(s);
        cout << is_palindrome(s) << " : " << s << endl;
    }
    cout << endl;

    return 0;
}