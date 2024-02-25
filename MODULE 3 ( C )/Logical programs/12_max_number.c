#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
   
    a>b ? (a>c ? printf("The maximum among three is: %d",a):printf("The amximum among three is: %d",c))
    :(b>c ? printf("The maximum among three is: %d",b):printf("The amximum among three is: %d",c)) ;
    
    
    }