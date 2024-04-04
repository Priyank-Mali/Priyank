#include<stdio.h>
int  main(){
    
// 1 
// 1 0 
// 1 0 1 
// 1 0 1 0 
// 1 0 1 0 1 

    int num = 5;
    for(int row=1;row<=num;row++){
        for(int col=1;col<=row;col++){
            if(col%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
        }
    printf("\n");
    }
}