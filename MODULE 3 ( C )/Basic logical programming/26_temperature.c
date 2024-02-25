#include<stdio.h>
int main(){
    float f;
    printf("Enter a temperature in fahrenheit: ");
    scanf("%f",&f);
    float c;
    c = (f-32)*5/9 ;
    printf("The temperature in celsius is : %f",c);
}