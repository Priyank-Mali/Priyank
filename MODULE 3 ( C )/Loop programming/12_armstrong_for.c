#include<stdio.h>
int main(){
    int a,r,sum = 0,temp=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    temp=a;

    while(a>0){
        r = a%10 ;
        a = a/10 ;
        sum = sum + (r*r*r);
    }
     if(sum==temp){
         printf("The number is armstrong number");
    }
    else{
        printf("The number is not armstrong number");
    }
}