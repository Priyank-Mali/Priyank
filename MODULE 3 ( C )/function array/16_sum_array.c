#include <stdio.h>

int main() {
    int x[5],sum=0;

    for (int i=0;i<5;i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    for (int i=0;i<5;i++) {
        sum = sum + x[i];
    }

    printf("Sum of the numbers: %d\n", sum);

}
