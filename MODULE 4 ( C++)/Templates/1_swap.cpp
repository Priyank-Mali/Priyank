#include <iostream> 
using namespace std; 

template <class T> 
int swapnumbers(T& a, T& b) 
{ 
    T t; 
    t = a; 
    a = b; 
    b = t; 
    return 0; 
} 
int main() 
{ 
    int a, b; 

    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;

    swapnumbers(a, b); 
    cout << a <<" "<< b << endl; 
    return 0; 
}