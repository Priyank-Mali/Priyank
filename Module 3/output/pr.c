#include <stdio.h>

int main() {
    // Define a character array to store a string
    char myString[50]; // You can adjust the size based on your needs

    // Input a string from the user
    printf("Enter a string: ");
    scanf("%49s", myString); // Use "%49s" to avoid buffer overflow and leave space for the null character

    // Display the entered string
    printf("You entered: %s\n", myString);

    return 0;
}
