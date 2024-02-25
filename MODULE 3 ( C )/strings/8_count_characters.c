#include <stdio.h>
#include<string.h>
int main() {

  char str[50];
  int count_v=0, count_c=0 ,count=0;

  printf("Enter a string:  ");
  scanf("%s",&str);

  for (int i = 0; str[i] != '\0';i++) {

      if (str[i] == 'a' ||  str[i]=='A' || 
            str[i] == 'e' ||str[i]=='E' ||
            str[i] == 'i' ||str[i]=='I' || 
            str[i] == 'o' ||str[i]=='O' || 
            str[i] == 'u' || str[i]=='U'){
        
      count_v++;
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
