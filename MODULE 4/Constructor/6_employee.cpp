#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    string name;
    int salary;
public:
    Employee(int pid,string n,int s){
        id = pid;
        name = n;
        salary = s;
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
    int id,sa;
    string n;
    Employee p(id,n,sa);
    p.performance();
    return 0;
}