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
    do{
    printf("---------------MENU---------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    
    if(choice<5 ){
      switch(choice){
        
        case 1: 
        printf("\nEnter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nAddition =  %f \n",add(a,b));
        break;

        case 2: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nSubtraction =  %f \n",sub(a,b));
        break;

        case 3: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
        printf("\nMultiplication =  %f \n",mul(a,b)); 
        break;

        case 4: 
        printf("Enter first number: "); scanf("%f",&a);
        printf("Enter second number: "); scanf("%f",&b);
            if(b!=0){
            printf("\nDivision =  %f \n",div(a,b)); 
                }
            else{
            printf("ERROR : Division by zero not allowed\n");
               }
            break;
    
         }
    }
      else if(choice != 5){
      printf("Invalid choice !!!\n");
    }
     } while(choice!=5);
     printf("Calculator is closed\n");
     printf("------------------------------");
         
   }
 
 
    

 