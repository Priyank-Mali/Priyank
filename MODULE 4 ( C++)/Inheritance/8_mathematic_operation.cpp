#include<iostream>
using namespace std;

class calculater{

    public:
    int a,b;

    int add(int a,int b){
        return a+b;
    }
    int sub(int a,int b){
        return a-b;
    }
    int mul(int a,int b){
        return a*b;
    }
    int div(int a,int b){
        if(b!=0){
        return a/b;
        }
        else{
            cout<<"Cannot divide by zero";
        }
    }

};
int main(){
    calculater p;
    int a,b;
    cout<<"enter num1:";
    cin>>a;
    cout<<"enter num2:";
    cin>>b;
    cout<<endl<<"addition:"<<p.add(a,b);
    cout<<endl<<"subtraction:"<<p.sub(a,b);
    cout<<endl<<"multiplication:"<<p.mul(a,b);
    cout<<endl<<"division:"<<p.div(a,b);


}