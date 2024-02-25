#include<stdio.h>
int main(){
    int n,fac=1,i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>=i){
        fac = fac*i ;
        i++ ; 
    }
    printf("The factorial of %d is: %d",n,fac);
}