#include <stdio.h>

int main() {
    int a,count=1, sum = 0;    

    while (count <= 10) {
        printf("Enter number %d : ",count);
        scanf("%d", &a);
        sum = sum + a;
        count++;
    }
    printf("Sum of the 10 numbers is: %d\n", sum);
}
