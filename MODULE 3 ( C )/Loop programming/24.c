#include<stdio.h>

// 1 + 2 + 3 + 4 + 5 + ... + n  

int main(){
    int num;
    printf("Enter range: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d ",i);
        if(i<num){
            printf("+ ");
        }
    }
}