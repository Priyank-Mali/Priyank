#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    x%2==0 ? printf("The number is even") : printf("The number is odd");
    
    }