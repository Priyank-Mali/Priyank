#include<stdio.h>
// * 
// * *         
// * * *       
// * * * *     
// * * * * *   
// * * * * * * 
// * * * * *   
// * * * *     
// * * *       
// * *         
// * 

int main(){
    int num = 5;
    for(int row=1;row<=num+1;row++){
        for(int col=1;col<=row;col++){
            printf("* ");
        }
    printf("\n");
    }
    for(int row=1;row<=num;row++){
        for(int col=1;col<=num+1-row;col++){
            printf("* ");
        }
    printf("\n");
    }

}