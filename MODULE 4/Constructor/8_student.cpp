#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int roll_number;
    int marks;
public:
    void setdata(string n,int r,int m){
        name = n;
        roll_number = r;
        marks = m;

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
    int r,m;
    string n;
    Student s1;
    s1.setdata(n,r,m);
    s1.dispaly();
    return 0;
}