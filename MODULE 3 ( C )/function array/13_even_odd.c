#include <stdio.h>

int main() {
    int x[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (x[i] % 2 == 0) {
            printf("%d is even\n", x[i]);
        } else {
            printf("%d is odd\n", x[i]);
        }
    }
}
