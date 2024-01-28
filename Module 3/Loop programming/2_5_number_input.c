#include<stdio.h>
int main(){

    char name[5][20];
    int i;
    for( i=1;i<=5;i++){
        printf("Enter name %d : ",i);
        scanf("%s",&name[i]);
        
    }
    for(i = 1; i<=5; i++){
        printf("%d name is %s\n",i,name[i]);
    }
    }