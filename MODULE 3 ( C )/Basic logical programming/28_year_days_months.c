#include<stdio.h>
int main(){
    int x, days, months;
    printf("Enter no of years: ");
    scanf("%d",&x);

    months = x*12 ;
    days = x*365 ;
    printf("The no of months in %d years are : %d",x,months);
    printf("\nThe no of days in %d years are : %d",x,days);
}