#include<stdio.h>
int main(){
    int a,sum=0,r,temp=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(int i=0;a>0;i++){
        r = a%10 ;
        sum = sum*10 + r ;
        a = a/10 ;
    }
    printf("The reverse number is: %d",sum);
}