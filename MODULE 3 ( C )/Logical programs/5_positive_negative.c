#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x>0){
        printf("The number is positive");
    }
    else if(x<0){
        printf("The number is negative");
    }
    else{
        printf("Enter number is zero");
    }
}