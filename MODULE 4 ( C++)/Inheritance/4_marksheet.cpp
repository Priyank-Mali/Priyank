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
class subjects{
protected:
    int english , hindi ,maths ,computer ,science ;

public:
    void getdata_subjects(){
        cout<<"Enter marks out of 100"<<endl;
        cout<<"Enter Obtained Marks in English: ";
        cin>>english;
        cout<<"Enter Obtained Marks in Hindi: ";
        cin>>hindi;
        cout<<"Enter Obtained Marks in Maths: ";
        cin>>maths;
        cout<<"Enter Obtained Marks in Computer: ";
        cin>>computer;
        cout<<"Enter Obtained Marks in Science: ";
        cin>>science;
    }
};
class marksheet: public subjects,public student{
public:
    int total = english + hindi + maths + computer + science ;
    float percentage = total / 500;    
    void display(){
        cout<<"Student Name:         "<<name<<endl;
        cout<<"Student Roll Number:  "<<roll_no<<endl;
        cout<<"English:    "<<english<<endl;
        cout<<"Hindi:      "<<hindi<<endl;
        cout<<"Maths:      "<<maths<<endl;
        cout<<"Computer:   "<<computer<<endl;
        cout<<"Science:    "<<science<<endl;
        cout<<"Total:      "<<total<<endl;
        cout<<"Percentage: "<<percentage<<endl;
            
        }
};

int main(){
    student s;
    s.getdata_student();
    subjects t;
    t.getdata_subjects();
    marksheet m;
    m.display();
    return 0;
}