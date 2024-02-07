#include <stdio.h>
#include<string.h>
int main() {

  char str[50];
  int alpha=0, digit=0 ,spchar=0;

  printf("Enter a string:  ");
  scanf("%s",&str);

  for (int i = 0; str[i] != '\0';i++) {

      if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=125)){ 
      alpha++;
        }
    
    else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i]>='A' && str[i]<='Z')) {
      count_c++;
    }

     else {
      count++;
    }
  }

  printf("Vowels: %d", count_v);
  printf("\nConsonants: %d", count_c);
  printf("\nspecial characters: %d ",count);
}
