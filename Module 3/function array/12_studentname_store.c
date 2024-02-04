#include <stdio.h>
#include<string.h>

int main() {
    
    char name[5][10];

    printf("Enter 5 student name:\n");
    for (int i=0;i<5;i++) {
        printf("Enter %d student name : ", i+1);
        scanf("%s", &name[i]);
    }

    printf("stdents names are:\n");
    for (int i=0;i<5;i++) {
        printf("%d student name is: %s\n",i+1, name[i]);
    }
}
