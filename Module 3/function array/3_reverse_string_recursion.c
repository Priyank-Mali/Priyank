#include<stdio.h>
#include<string.h>
int reverse(char str[]){
    int i , length ,temp;
    length = strlen(str);

    for(i=0;i<length/2;i++){

        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
}  

int main(){

    int str[50];

    printf("Enter a string : ");
    scanf("%s",&str);
    int len = strlen(str);
    reverse(str);
    printf("\nReversed string : %s ",str);
    
}