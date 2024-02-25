#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int roll_number;
    int marks;
public:
    void setdata(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter roll number: ";
        cin>>roll_number;
        cout<<"Enter marks: ";
        cin>>marks;

    }
    void dispaly(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number is: "<<name<<endl;
        cout<<"Marks is: "<<name<<endl;
        if(marks>=90) cout<<"Your grade is A++:";
        else if(marks>=80 && marks<90) cout<<"Your grade is A:";
        else if(marks>=70 && marks<80) cout<<"Your garde is B++:";
    }

};
int main(){
    Student s1;
    s1.setdata();
    s1.dispaly();
    return 0;
}