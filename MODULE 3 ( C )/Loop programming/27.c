#include<stdio.h>

// 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ........... n

int main(){
    int num;
    int init = 2;
    printf("Enter Range of series: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d/%d ",i,init);
        if(i%2==0){
            printf("+ ");
        }
        else {
            printf("- ");
        }
        init++;
    }
}