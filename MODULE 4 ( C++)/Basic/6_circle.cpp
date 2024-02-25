#include<iostream>
#define pi 3.14
using namespace std;
class circle{
private: 
    float radius;
public:
    void setdata(){
        cout<<"Enter circle radius: ";
        cin>>radius;
    }
    float circumference(){
        return 2*pi*radius;
    }
    float area(){
        return pi*radius*radius;
    }
};
int main(){
    circle c;
    c.setdata();
    cout<<"Circumference of circle is: "<<c.circumference()<<endl;
    cout<<"Area od circle is: "<<c.area();

}