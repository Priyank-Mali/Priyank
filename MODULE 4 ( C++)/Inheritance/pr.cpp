#include<iostream>
using namespace std;

class person{
protected:
    int age;
    string name;
public:
    void pdata(){
        cout<<"Enter name:";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
    }
};
class student : virtual public person{
protected:
    int percentage;
public:
    void mark(){
        cout<<"Enter percentage:";
        cin>>percentage;
    }
};
class teacher : public student{
protected:
    int salary;
public:
    void set(){
        cout<<"enter teacher salary:";
        cin>>salary;
    }
    void display(){
        cout<<"NAME: "<<name<<endl;
        cout<<"AGE: "<<age<<endl;
        cout<<"PERCENTAAGE: "<<percentage<<endl;
        cout<<"SALARY: "<<salary<<endl;
    }
};
int main(){
    teacher t;
    t.pdata();
    t.mark();
    t.set();
    t.display();
}