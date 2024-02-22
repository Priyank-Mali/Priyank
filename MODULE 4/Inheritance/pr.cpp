#include<iostream>
using namespace std;

class value{
private:
    int a,b;
public:
value(){
    a = 12;
    b = 34;
    cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
}
    value(int a1,int b1){ // parameterized constructor
        a = a1;
        b = b1;
        cout<<"A: "<<a<<endl<<"B: "<<b;

    }
    // value(const value &v2){ // copy constructor
    //     a = v2.a;
    //     b = v2.b;
    // }
    // void dispaly(){
    //     cout<<"The value of a is: "<<a<<endl;
    //     cout<<"The value of b is: "<<b<<endl;
    // }
};
int main(){
    // int a,b;
    // cout<<"Enter a: ";
    // cin>>a;
    // cout<<"Enter b: ";
    // cin>>b;

    value v;
    value v1(67,89);


    // value v1(a,b);
    // v1.dispaly();
    // value v2=v1;
    // v2.dispaly();

}