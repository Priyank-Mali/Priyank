#include<iostream>
using namespace std;

class A{
private: 
    int principle;

protected:
    int faculty;

public:
    int student;

};
class B : public A{
    // principle is not accessible from B
    // faculty is protected
    // student is public
};
class C : protected A{
    // principle is not accessible from C
    // faculty is protected
    // student is protected also
};
class D : private A{
    // principle is not accessible from D
    // faculty is private
    // student is private
};
int main(){
    return 0;
}