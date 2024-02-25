#include<iostream>
using namespace std;
class Triangle{
private:
    int side1;
    int side2;
    int side3;
public:
    void setdata(){
        cout<<"Enter first side: ";
        cin>>side1;
        cout<<"Enter second side: ";
        cin>>side2;
        cout<<"Enter third side: ";
        cin>>side3;
    }
    void check(){
        if(side1==side2 && side2==side3)
         cout<<"This is an Equilateral Triangle.";

        else if(side1==side2 || side2==side3 || side1==side3)
         cout<<"This is an Isosceles Triangle.";

        else if(side1!=side2 && side2!=side3 && side1!=side3)
         cout<<"This is an Scalene Triangle.";
    }
};
int main(){
    Triangle T;
    T.setdata();
    T.check();
    return 0;
}