#include<stdio.h>
int  main(){
    
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
    
    int num=5;
    int init = 1;
    for(int row=1;row<=num;row++){
        for(int col=1;col<=row;col++){
            printf("%c ",init+64);
            init++;
        }
    printf("\n");
   }   
}