// Write a program to make simple calculator.

#include<stdio.h>
int main()
{
    float num1,num2;
   
       printf("enter two number: ");
       scanf("%f %f,",&num1,&num2);
       
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float division = num1 / num2;
    
    printf("addition = %d\n" ,addition);
    printf("subtraction = %d\n" ,subtraction);
    printf("multiplication = %d\n" ,multiplication);
    printf("division = %f" ,division);

}