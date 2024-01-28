#include<stdio.h>
int main(){
    int a,last,first ;
    printf("Enter a number: ");
    scanf("%d",&a);

    last = a%10 ;
    while(a>=10){
        a = a/10 ;
    }
    first = a;
    printf("The sum of first and last digit in number is : %d",first + last); 
    
    }
    