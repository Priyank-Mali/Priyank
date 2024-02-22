#include<iostream>
using namespace std;

class Car{
private: 
    string company;
    string model;
    int year;
public:
    void setdata(string c,string m,int y){
        company = c;
        model = m;
        year = y;
        cout<<"Enter name of car company: ";
        cin>>company;
        cout<<"Enter model of car: ";
        cin>>model;
        cout<<"Enter which year of this car: ";
        cin>>year;
    }
    void getdata(){
        cout<<"COMPANY NAME: "<<company<<endl;
        cout<<"MODEL NAME: "<<model<<endl;
        cout<<"YEAR OF MANUFACTURING: "<<year<<endl;
    }
};
int main(){
    Car c1;
    string c,m;
    int y;
    c1.setdata(c,m,y);
    c1.getdata();
    return 0;
}