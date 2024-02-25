#include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("Enter expence 1 : ");
    scanf("%f",&a);
    printf("Enter expence 2 : ");
    scanf("%f",&b);
    printf("Enter expence 3 : ");
    scanf("%f",&c);
    printf("Enter expence 4 : ");
    scanf("%f",&d);
    printf("Enter expence 5 : ");
    scanf("%f",&e);

    float avg = (a+b+c+e+d)/5 ;
    printf("The average expence is : %f ",avg);
    

}