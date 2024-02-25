# include<stdio.h>
int main(){

    int num1,num2,temp = 0;
    printf("enter first number: ");
    scanf("%d",&num1);

    printf("enter second number: ");
    scanf("%d",&num2);

    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;

    printf(" first number:%d \n",num1);
    printf(" second number:%d ",num2);




    
}