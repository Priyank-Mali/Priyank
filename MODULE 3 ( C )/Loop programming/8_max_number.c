#include<stdio.h>
int main(){
    int a,r,temp=0;
    printf("Enter a number: ");
    scanf("%d",&a);

    while (a > 0) {
        r = a % 10;
        if ( r > temp) {
            temp = r;
        }
        a =a / 10;
    }

    printf("Maximum digit is: %d", temp);

}

