#include<iostream>
#define pi 3.14
using namespace std;
class circle{
private: 
    float radius;
public:
    void setdata(float r){
        radius = r;
    }
    float circumference(){
        return 2*pi*radius;
    }
    float area(){
        return pi*radius*radius;
    }
};
int main(){
    float r;
    cout<<"Enter circle radius: ";
    cin>>r;
    circle c;
    c.setdata(r);
    cout<<"Circumference of circle is: "<<c.circumference()<<endl;
    cout<<"Area od circle is: "<<c.area();

}
