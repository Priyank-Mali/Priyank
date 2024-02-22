#include<iostream>
using namespace std;
class Rectangle{
private:
    int length,width;
public:
    void setdata(int l,int w){
        length = l;
        width = w;
    }
    int perimeter(){
        return 2*(length + width);
    }
    int area(){
        return length * width ;
    }
};
int main(){
    int len,wid;
    cout<<"Enter reactangle length: ";
    cin>>len;
    cout<<"Enter reactangle width: ";
    cin>>wid;
    Rectangle r;
    r.setdata(len,wid);
    cout<<"Perimeter of rectagle is: "<<r.perimeter()<<endl;
    cout<<"Area of rectangle is: "<<r.area();
    return 0;
}