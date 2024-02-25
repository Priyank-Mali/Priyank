#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    a<b ? (a<c? printf("The minimum number among three is: %d",a):printf("The minimum number among three is: %d",c))
    :(b<c? printf("The minimum number among three is: %d",b):printf("The minimum number among three is: %d",c));
}