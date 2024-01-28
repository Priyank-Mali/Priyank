#include<stdio.h>
int main(){
    float x , avg_days_month;
    printf("Enter days: ");
    scanf("%f",&x);

    avg_days_month = 365/12 ;

    printf("Number of months: %f",x/avg_days_month);
}