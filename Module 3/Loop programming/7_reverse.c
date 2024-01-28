#include<stdio.h>
int main(){
    int n,last_digit=0;
    printf("Enter a number: ");
    scanf("%d",&n);//1234

    while(n>0){
        last_digit = last_digit * 10 ;
        last_digit = last_digit + (n%10) ;
        n = n/10 ;
    }
    printf("The reverse number is : %d ",last_digit);
    
}