#include<stdio.h>
int main(){
    int a,sum = 0,i=1;
    printf("Enter first N natural numbers: ",a);
    scanf("%d",&a);

    while(i<=a){
        sum = sum + i ;
        i++;
    }
         printf("The sum of first %d natural number is : %d",a,sum);
}