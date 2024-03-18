#include<iostream>
using namespace std;

class grandfather{
    protected:
        void fun1(){
            cout<<"grandfather class";
        }
};
class father : protected grandfather{
    protected:
        void fun2(){
            cout<<"father class\n";
        }
};
class child : protected father{
    public:
        void fun3(){
            cout<<"child class\n";
        }
        void display(){
            fun2();
            fun1();
        }
};
int main(){
    child obj;
    obj.fun3();
    obj.display();
}