#include<iostream>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    void setdata_person(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter age: ";
        cin>>age;
    }
};
class student{
protected:
    float percentage;
public:
    void setdata_student(){
        cout<<"Enter percentage: ";
        cin>>percentage;
    }

};
class teacher: public Person,public student{
protected:
    int salary;
public:
    void teacher_salary(){
        cout<<"Enter teacher salary: ";
        cin>>salary;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Percentage: "<<percentage<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main(){
    teacher t;
    t.setdata_person();
    t.setdata_student();
    t.teacher_salary();
    t.display();
    return 0;
}