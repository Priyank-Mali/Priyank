#include<stdio.h>
int factorial(int x){
    if(x==1) return 1;
    return x*factorial(x-1);
}
int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    factorial(x);
    
    printf("The factorial of %d is: %d ",x,factorial(x));
    
}