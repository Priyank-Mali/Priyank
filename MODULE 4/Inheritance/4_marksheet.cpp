#include<iostream>
using namespace std;

class student{
protected:
    string name;
    int roll_no;
public:
    void getdata_student(){
        cout<<"Enter student name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter student roll number: ";
        cin>>roll_no;
    }
};
int main(){
    
    return 0;
}