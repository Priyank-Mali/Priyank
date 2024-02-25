#include<stdio.h>
int main(){
    int n;
    printf("Enter a year: ");
    scanf("%d",&n);
    if((n%400==0 || n%100!=0) && n%4==0){
        printf("The year is leap year");
    }
    else
        printf("The number is not leap year");
}