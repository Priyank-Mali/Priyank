//Find perimeter of rectangle.

#include<stdio.h>
int main(){
    int length,width,perimeter;

    printf("enter length of a rectangle :");
    scanf("%d",&length);
    
    printf("enter width of a rectangle :");
    scanf("%d",&width);

    perimeter = (length + width) *2 ;

    printf("perimeter of rectangle : %d ",perimeter);
}