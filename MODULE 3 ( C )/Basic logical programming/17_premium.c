#include<stdio.h>
int main(){
    float x,y;
    printf("Enter person salary: ");
    scanf("%f",&x);
    printf("Enter person premium in percentage: ");
    scanf("%f",&y);

    float annual_premium = x*y/100 ;
    printf("The annual premium is: %f ",annual_premium);
    
}