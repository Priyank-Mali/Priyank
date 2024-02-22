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
};
class area : public rectangle{
    int area1(){
        return length * width ;
    }
};
int main(){
    return 0;
}