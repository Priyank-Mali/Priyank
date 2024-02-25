#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s",str);

    for(i=0; str[i]!='\0';i++);
        
    printf("Length of the string: %d\n",i);

}
