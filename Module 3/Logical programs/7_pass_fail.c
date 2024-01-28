#include<stdio.h>
int main(){
    int x;
    printf("Enter a marks out of 100 : ");
    scanf("%d",&x);
    
    if(x<35){
        printf("Fail");
    }
    else{
        printf("Pass");
    }
    
    }