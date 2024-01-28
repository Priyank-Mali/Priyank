#include<stdio.h>
int main(){
    int x,y;
    printf("Enter cost price: ");
    scanf("%d",&x);
    printf("Enter selling price: ");
    scanf("%d",&y);

    if(x>y){
        printf("Loss: %d ",x-y);
    }
    else
        printf("Profit: %d",y-x);
}