#include<iostream>
using namespace std;

class cricketer{
protected:
    int total_match;
public:
    void cricketer_setdata(){
        cout<<"Enter Number of matches: ";
        cin>>total_match;
    }
    
};
class batsman: public cricketer{
protected:
    int total_run;
    float avg_run;
    int best_performance;
public:
    void batsman_setdata(){
        cout<<"Enter total runs: ";
        cin>>total_run;
        cout<<"Enter best performance: ";
        cin>>best_performance;
    }
    void display(){
        cout<<"No.of matches played: "<<total_match<<endl;
        cout<<"Total runs: "<<total_run<<endl;
        cout<<"Best performance: "<<best_performance<<endl;
        avg_run = total_run / total_match ;
        cout<<"Average runs: "<<avg_run<<endl;
        if(avg_run>=50){
            cout<<"Very good batsman";
        }
        else if(avg_run>=40 && avg_run<50){
            cout<<"average player";
        }
        else if(avg_run>=30 && avg_run>40){
            cout<<"Decent batsman";
        }
        else{
            cout<<"Wrost batsman";
        }
    }
};
int main(){
    batsman p;
    p.cricketer_setdata();
    p.batsman_setdata();
    p.display();
    return 0;
}