#include<stdio.h>
int main(){
    int a,b,sum ;

    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);

    sum = a + b ;

    printf("The sum of two numbers : %d\n",sum);
    printf("The size value of sum is : %d",sizeof(sum));

    
    
    }