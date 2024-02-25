#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int temp;

    while(a>0 ){
        temp = a%10 ;
        sum = sum + temp ;
        a = a/10 ;
    }
    printf("The sum is: %d",sum);
}