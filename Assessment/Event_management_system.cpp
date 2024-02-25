#include<iostream>
using namespace std;

int numberof_guest;
void no_of_server(){
    return numberof_guest / 20 ;
}
class event{
public:
    string event_name;
    string customer_name;
    int numberof_minutes;
    void input_name(){
        cout<<"Enter the name of event: ";
        cin>>event_name;
        cout<<"Enter the customer's First and Last name: ";
        cin>>customer_name;
        cout<<"Enter number of guest: ";
        cin>>numberof_guest;
        cout<<endl;
        cout<<"Enter the number of minutes in the Event: ";
        cin>>numberof_minutes;
    }
};
void ceil(){
    const double costperhour = 18.50;
    const double costperminute = 0.40;
    const double costofdinner = 20.70;
    double Cost1 = (numberof_minute / 60) * costperhour;
    double Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
    CostForOneServer = Cost1 + Cost2;
}
class rate : public event{
public:
    void cost_of_one_server(){
        ceil();
        
    }
    
};
int main(){
    
    return 0;
}