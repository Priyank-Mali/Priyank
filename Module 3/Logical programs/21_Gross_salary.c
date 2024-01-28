#include<stdio.h>
int main(){
    float bs;
    printf("Enter basic salry: ");
    scanf("%f",&bs);
    
    if(bs<=10000){
    float gross_salary = bs + (bs*20/100)+ (bs*80/100) ;
        printf("The Gross salary is: %f",gross_salary);
    }

    if(bs<=20000){
    float gross_salary = bs + (bs*25/100)+ (bs*90/100) ;
        printf("The Gross salary is: %f",gross_salary);
    }
    
    if(bs>20000){
    float gross_salary = bs + (bs*30/100)+ (bs*95/100) ;
        printf("The Gross salary is: %f",gross_salary);
    }
}