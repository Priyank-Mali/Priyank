// Finf area and circumference of circle.

#include<stdio.h>
#define pi 3.14;
int main(){
    float radius,area,circumference;

    printf("define radius value :");
    scanf("%f",&radius);

    area =(radius * radius)*pi;
    circumference =2*radius*pi;

    printf("area:%.2f\n",area);
    printf("circumference:%.2f",circumference);
    

}