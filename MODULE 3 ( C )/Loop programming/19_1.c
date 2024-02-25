#include<stdio.h>
int  main(){
    // int x;
    // printf("Enter a number: ");
    // scanf("%d",&x);

    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(j%2==0){
            printf("0");
            }
            else{
                printf("1");
            }
            
        }
        printf("\n");
    }
}