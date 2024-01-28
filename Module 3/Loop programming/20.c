#include<stdio.h>
int main(){
   int count=1;
    for(int i=1;i<=50;i++){
        if(count<=9){
            printf("0%d ",i);
            count++;}
            else{
                 printf("%d ",i);    
            }
             if(i%10==0){
            printf("\n");
       
        }
    }
}