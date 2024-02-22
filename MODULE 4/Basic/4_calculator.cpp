#include<iostream>
using namespace std;
class calculator{
public:
     float a,b;      
public:
    void res(){
        
        cout<<"Enter First number: ";
        cin>>a;
        cout<<"Enter Second number: ";
        cin>>b;
    }

    float sum(){
        return a+b;
    }
    float sub(){
        return a-b;
    }
    float mul(){
        return a*b;
    }
    float div(){
        return a/b;
    }
};
int main(){
    calculator p;
    char op;
    cout<<"Enter operator: ";
    cin>>op;
    switch(op){
        case '+' : p.res(); cout<<"Addition: "<<p.sum();break;
        case '-' : p.res(); cout<<"Subtraction: "<<p.sub();break;
        case '*' : p.res(); cout<<"Multiplication: "<<p.mul();break;
        case '/' : p.res(); cout<<"Division: "<<p.div();break;
    }
}