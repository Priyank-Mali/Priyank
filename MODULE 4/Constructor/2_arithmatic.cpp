#include<iostream>
using namespace std;
class Addition{
private:
    int a,b;
public:
    Addition(int a1,int b1){
        a = a1;
        b = b1;
    }
    int add(){
        return a+b;
    }
};

int main(){
    int a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    Addition Add(a,b);
    cout<<"Addition of number is: "<<Add.add();
    return 0;
}