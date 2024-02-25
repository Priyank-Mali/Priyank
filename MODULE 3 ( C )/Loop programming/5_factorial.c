#include<stdio.h>
int main(){
    int x,fac=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        fac = i*fac;
        
    }
    printf("the factorial of %d is: %d",x,fac);

}