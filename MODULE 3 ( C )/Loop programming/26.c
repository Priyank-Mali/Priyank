#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    int i=1;
    for( i=1;i<=a;i++){
        i=1;
        printf("(%d)",i);
            if(i<a){
             printf(" + ");
         }
         
    }
}