#include <stdio.h>
int main() {
    char s1[100],s2[100] ,i;
    printf("Enter string s1: ");
    scanf("%s",&s1);
    

    for (int i = 0; s1[i] != '\0'; i++) {
        
        s2[i] = s1[i];
        
    }
    
    printf("coping from s1: %s", s2);
    return 0;
}
