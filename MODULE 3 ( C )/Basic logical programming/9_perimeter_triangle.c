//Find perimeter of triangle.

#include<stdio.h>
int main(){
    int side_a,side_b,side_c,perimeter  ;

    printf("enter value of side_a :");
    scanf("%d",&side_a);
    printf("enter value of side_b :");
    scanf("%d",&side_b);
    printf("enter value of side_c :");
    scanf("%d",&side_c);

    perimeter = side_a + side_b + side_c ;
    
    printf("circumference of triangle :%d",perimeter);
    }