#include<iostream>
using namespace std;

int multiplication(int a,int b){return a*b;}
int cube(int a){return a*a*a;}

int main(){
    int a,b,c;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;
    cout<<"multiplication of "<<a<<" and "<<b<<": "<<multiplication(a,b)<<endl;
    cout<<"cube of "<<c<<" : "<<cube(c)<<endl;
    return 0;
}