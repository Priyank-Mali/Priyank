#include<iostream>
#include<string>
using namespace std;

class MyString {
private:
    string str;

public:

    MyString(string s) : str(s) {}

    MyString operator+(const MyString& other) {
        return MyString(str + other.str);
    }

    void display() {
        cout << "Concatenated string: " << str << endl;
    }
};

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    MyString obj1(str1);
    MyString obj2(str2);

    MyString concatenatedString = obj1 + obj2;

    concatenatedString.display();

    return 0;
}
