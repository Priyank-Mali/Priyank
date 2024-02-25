#include<iostream>
using namespace std;
class Person{
private: 
    int age;
    string name;
    string country;
public:
    void setdata(){
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter your name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter which country you from: ";
        cin>>country;
    }
    void getdata(){
        cout<<"AGE: "<<age<<endl;
        cout<<"NAME: "<<name<<endl;
        cout<<"COUNTRY: "<<country;
    }
};
int main(){
    Person p;
    p.setdata();
    p.getdata();
    return 0;
}