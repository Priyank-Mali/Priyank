#include <iostream>
using namespace std;

class rectangle{
public:
    int length;
    int width;
    void setdata(){
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }
    int getdata(){
        return length*width;
    }
};
class area : public rectangle{

};
int main(){
    area a;
    a.setdata();
    cout<<"Area of rectangle: "<<a.getdata();
    return 0;
}