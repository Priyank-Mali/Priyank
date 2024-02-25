#include<stdio.h>
int r=0,sum=0,temp=0;

int palindrome(int a){
    temp = a;
    for(int i=0;a>0;i++){
    r = a%10 ;
    sum = sum*10 + r ;
    a = a/10;
    }
    return temp==sum;
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);



    if(palindrome(a)){
        printf("It is a palindrome number ");
    }
    else{
        printf("It is not palindrome number ");
    } 
   }

