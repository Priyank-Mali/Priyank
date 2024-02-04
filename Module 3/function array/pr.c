#include <stdio.h>

int main() {
    // Declare an array to store names of 5 students
    char studentNames[5][50];

    // Accept names from the user
    printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", studentNames[i]);
    }

    // Display the entered names
    printf("Entered names of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, studentNames[i]);
    }

    return 0;
}
