#include<iostream>
using namespace std;

class student{
protected:
    int roll_number;
public:
    void set_rollnumber(){
        cout<<"Enter roll number: ";
        cin>>roll_number;
    }
};
class test: public student{
protected:  
    int maths;
    int english;
public:
    void set_marks(){
        cout<<"Enter Maths marks: ";
        cin>>maths;
        cout<<"Enter English Marks: ";
        cin>>english;
    }
};
class total : public test{
public:
    int total; 
    void display(){
        cout<<"Roll number: "<<roll_number<<endl;
        cout<<"Total marks obtained in maths and english: "<<maths+english<<endl;
        
    }
};

int main(){
    total p;
    p.set_rollnumber();
    p.set_marks();
    p.display();
    return 0;
}