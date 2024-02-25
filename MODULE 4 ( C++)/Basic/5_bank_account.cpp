#include<iostream>
using namespace std;
class bank{
private:
    string name;
    int number;
    string type;
    int balance;

public:
    void get_data(){
        cout<<"Name of the depositer: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Your Account number is: ";
        cin>>number;
        cout<<"Type of account: ";
        cin>>type;
        cout<<"balance: ";
        cin>>balance;
    }

    void display(){
        int withdraw;
        int deposit;
        cout<<"Enter deposit amount: ";
        cin>>deposit;
        cout<<"Enter withdrawal amount: ";
        cin>>withdraw;
        cout<<"Account Holder name: "<<name<<endl;
        cout<<"Your Account number: "<<number<<endl;
        cout<<"Type of account: "<<balance<<endl;

        cout<<"After deposite total balance is: "<<(balance + deposit)<<endl;
        cout<<"After withdraw total balance is: "<<(balance+deposit)-withdraw<<endl;

    }
};
int main(){
    bank p1;
    p1.get_data();
    p1.display();
}