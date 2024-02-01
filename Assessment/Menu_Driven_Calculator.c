#include<stdio.h>

 float add(float a,float b){
    return a+b;
 }
 float sub(float a, float b){
    return a-b;
 }
 float mul(float a, float b){
    return a*b;
 }
 float div(float a,float b){
    return a/b;
 }
 int main(){
    int choice;
    float a,b;
    printf("---------------MENU---------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    if(choice<=4){
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
    
      switch(choice){
        case 1: 
        printf("\nEnter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nAddition =  %f ",add(a,b));
        break;

        case 2: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nSubtraction =  %f ",sub(a,b));
        break;

        case 3: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nMultiplication =  %f ",mul(a,b));
        break;

        case 4: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nDivision =  %f ",div(a,b));
        break;
        
        default:
        printf("Invalid choice !!!!");
        }
    }
        printf("\n---------------------------------");
    return 0;
 }
 