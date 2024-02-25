#include<stdio.h>
int main(){
    int a,temp=0,r,sum=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    temp=a;

    for(int i=0;a>0;i++){
        r = a%10;
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