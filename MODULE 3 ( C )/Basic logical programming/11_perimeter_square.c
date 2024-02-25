//Find perimeter of square.

#include<stdio.h>
int main(){
    int side,perimeter;
    printf("Enter side value of square: ");
    scanf("%d",&side);

    perimeter = 4 * side ;
    printf("Perimeter of square:%d",perimeter);
}