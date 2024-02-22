#include<iostream>
using namespace std;

class Date{
private:
    int day;
    int month;
    int year;
public:
    Date(int d,int m,int y){
        day = d;
        month = m;
        year = y;
        cout<<"Enter a date: ";
        cin>>day;
        cout<<"Enter a month: ";
        cin>>month;
        cout<<"Enter a year(1200 - 9999): ";
        cin>>year;
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    void check(){
        
        if((day>=1 && day<=31) && (month==1 || month==3 ||month==5|| 
        month==7|| month==8|| month==10|| month==12)) 
         cout<<"This is valid date"<<endl;

        else if((day>=1 && day<=30) && (month==4 || month==6 ||
         month==9|| month==11)) 
         cout<<"This is valid date"<<endl;

        else if ((day>=1 && day<=28) && (month==2)) cout<<"This is valid date"<<endl;

        else if((day==29 && month==2) && (year%400==0 ||(year%4==0 && year%100!=0)))
        cout<<"This is valid date"<<endl;
        
        else 
        cout<<"Invalid date!!!"<<endl;
    }   
    

};
int main(){
    int d,m,y;
    Date d1(d,m,y);
    d1.check();
    return 0;
}