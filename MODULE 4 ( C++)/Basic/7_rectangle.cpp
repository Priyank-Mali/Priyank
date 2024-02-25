#include<iostream>
using namespace std;
class Rectangle{
private:
    int length,width;
public:
    void setdata(){
    cout<<"Enter reactangle length: ";
    cin>>length;
    cout<<"Enter reactangle width: ";
    cin>>width;    
    }
    int perimeter(){
        return 2*(length + width);
    }
    int area(){
        return length * width ;
    }
};
int main(){
   
    Rectangle r;
    r.setdata();
    cout<<"Perimeter of rectagle is: "<<r.perimeter()<<endl;
    cout<<"Area of rectangle is: "<<r.area();
    return 0;
}