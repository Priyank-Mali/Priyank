#include<stdio.h>
int main(){
    int x;
    for(int i=1;i<=10;i++){
        printf("Enter number %d : ",i);
        scanf("%d",&x);
    }
    if(x%2==0){
        printf("there are %d even numbers");
    }
}