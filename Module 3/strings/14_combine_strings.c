#include <stdio.h>
int main() {
  char s1[50] , s2[50] ,
  int length, j;
  
printf("Enter string: ");
scanf("%s",s1);

printf("Enter string: ");
scanf("%s",s2);

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  // concatenate s2 to s1
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  // terminating the s1 string
  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}