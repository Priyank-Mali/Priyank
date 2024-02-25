#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter side A: ");
    scanf("%d",&a);
    printf("Enter side B: ");
    scanf("%d",&b);
    printf("Enter side C: ");
    scanf("%d",&c);

    if(a+b>c || a+c>b || b+c>a){
        printf("Triangle can be formed");
    }
    else{
        printf("Tringle not be formed");
    }
}