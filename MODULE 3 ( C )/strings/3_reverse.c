#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char str[50];  
           
    printf("Enter a string: ");
    scanf("%s",&str);  
        
    for(int i=0;i<strlen(str);i++){  
        printf("%c ", str[i]);  
    }  
    printf("\n");
    for(int i=strlen(str);i>=0;i--){
        printf("%c ",str[i]);
    }
}