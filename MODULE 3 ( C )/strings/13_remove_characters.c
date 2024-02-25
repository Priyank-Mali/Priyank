#include <stdio.h>
int main() {
   char str1[100],str2[100];
   int i;
   
   printf("Enter a string: ");
   scanf("%s",&str1); 


   for (i=0;str1[i] != '\0';i++) {
        if((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] == '\0')) {
                str2[i] = str1[i];
        }
   }
   str2[i] = '\0';
   printf("new string is: %s ",str2);
}