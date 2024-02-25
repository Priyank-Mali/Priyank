#include<stdio.h>
int main(){
    char operator;
    printf("choose operation you wnat to do:(+ , - , * , / , %% ) ");
    scanf("%c",&operator);

    float a,b;
    printf("Enter two numbers: ");
    scanf("%f %f",&a,&b);

    switch(operator){
    case  '+': printf("The addition of %f and %f is = %f",a,b,a+b); break;
    case  '-': printf("The subtraction of %f and %f is = %f",a,b,a-b); break;
    case  '*': printf("The multiplication of %f and %f is = %f",a,b,a*b); break;
    case  '/': printf("The %f is devided by %f is = %f",a,b,a/b); break;
    case  '%': printf("The percentage of %f and %f is = %f",a,b,a*b/100); break;
    }
}