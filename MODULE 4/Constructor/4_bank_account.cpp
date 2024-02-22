#include<iostream>
using namespace std;

class Bank{
private:
    int number;
    int balance;
public:
    void setdata(int n,int b){
        number = n;
        balance = b;
        cout<<"Enter Account number: ";
        cin>>number;
        cout<<"Enter Balance: ";
        cin>>balance;
    }
       void with_draw(){  
        int withdraw; 
        cout<<"Enter an amount you want to withdraw: ";
        cin>>withdraw;
        balance = balance - withdraw;
    }
    void rem_balance(){
        cout<<"After withdrawing balance is: "<<balance;
    }


};
int main(){
    int n;
    int b;
    Bank p;
    p.setdata(n,b);
    p.with_draw();
    p.rem_balance();

    return 0;
}