#include<iostream>
using namespace std;
class Addition{
private:
    int a,b;
public:
    Addition(){
        //return a+b;
    }
};

int main(){
    int a,b;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    Addition Add();
    //cout<<"Addition of number is: "<<Add.add();
    return 0;
}