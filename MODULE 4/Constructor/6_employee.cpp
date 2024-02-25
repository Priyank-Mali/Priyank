#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    string name;
    int salary;
public:
    Employee(){
        cout<<"Enter employee ID: ";
        cin>>id;
        cout<<"Enter employee name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter employee salary: ";
        cin>>salary;
    }
    void performance(){
        int bonus;
        cout<<"Enter bonus ammount: ";
        cin>>bonus;
        salary = salary + bonus;
        cout<<"Total salary employee get is: "<<salary;
    }

};
int main(){
    Employee p;
    p.performance();
    return 0;
}