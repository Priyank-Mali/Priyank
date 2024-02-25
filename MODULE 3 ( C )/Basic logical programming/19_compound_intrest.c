#include<stdio.h>
int main(){
    float p,r,ci,amount,t;
    printf("Enter principle amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter time periode: ");
    scanf("%f",&t);
    

    amount = p *(1 + (r/100))* t ;
    printf("Total amount is: %f ",amount);

    ci = amount - p ;
    printf("The compound interest is:%f ",ci);
    
}