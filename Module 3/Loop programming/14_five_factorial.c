#include <stdio.h>

int main() {
    int a; //fact=1

    for (int i=0;i<5;i++) {
        printf("Enter a number: ");
        scanf("%d", &a);
        int fact = 1;
        for (int i=1;i<=a;i++) {
            fact = fact * i;
        }
         printf("Factorial of %d is: %d\n",a,fact);
    }
}
