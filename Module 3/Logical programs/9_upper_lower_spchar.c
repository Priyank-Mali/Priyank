#include <stdio.h>
int main() {
    char x ;
    printf("Enetr a value: ");
    scanf("%c",&x);
    printf("The ASCII value of %c is %d\n",x,x);

    if (x>=65 && x<=90) {
         printf("%c is an uppercase character.\n", x);
    } 
    else if (x>=97 && x<=122) {
         printf("%c is a lowercase character.\n", x);
    } 
    else if(x>=48 && x<=57) {
         printf("%c is a number.\n", x);
    }
    else{
          printf("It is apecial caracter");
    }
}



