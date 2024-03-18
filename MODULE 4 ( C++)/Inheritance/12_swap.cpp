#include<iostream>
using namespace std;

class Swap {
private:
    int num1, num2;

public:
    
    Swap(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    friend void swap(Swap&);
};


void swap(Swap &obj) {
    
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    int num1,num2;

    cout << "Enter two numbers: ";
    cin >> num1 >>num2;

    Swap numbers(num1, num2);
    cout << "Before swapping: num1 = " << numbers.num1<< ", num2 = " << numbers.num2 << endl;
    swap(numbers);
    cout << "After swapping: num1 = " << numbers.num1 << ", num2 = " << numbers.num2 << endl;
    return 0;
}