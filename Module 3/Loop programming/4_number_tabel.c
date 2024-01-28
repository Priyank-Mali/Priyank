#include<stdio.h>
int main(){
    int x;
    printf("Enetr a number: ");
    scanf("%d",&x);

    for(int i=x;i<=x*10;i=i+x){
        printf("%d ",i);
    }
}