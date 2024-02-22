#include<iostream>
using namespace std;
class Triangle{
private:
    int side1;
    int side2;
    int side3;
public:
    void setdata(int s1,int s2,int s3){
        side1 = s1,side2 = s2,side3 = s3;
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
    int s1,s2,s3;
    T.setdata(s1,s2,s3);
    T.check();
    return 0;
}