#include <stdio.h>

int main() {
    
    int n[5];

    printf("Enter 5 numbers:\n");
    for (int i=0;i<5;i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &n[i]);
    }

    printf("reverse number is:\n");
    for (int i=4;i>=0;i--) {
        printf("%d\n", n[i]);
    }
}
