#include<iostream>
using namespace std;
class Person{
private: 
    int age;
    string name;
    string country;
public:
    void setdata(int a,string n,string c){
        age  = a;
        name = n;
        country = c;
        cout<<"Enter your age: ";
        cin>>age;
        cout<<"Enter your name: ";
        cin>>name;
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
    int a;
    string n,c;
    p.setdata(a, n, c);
    p.getdata();
    return 0;
}