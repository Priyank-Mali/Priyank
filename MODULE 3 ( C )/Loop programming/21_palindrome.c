#include<stdio.h>
int main(){
    int a=0,temp=0,r=0,sum=0;
    
    int i=0 ;
    while(i<3){
        printf("Enter a number: ");
        scanf("%d",&a);
        temp=a;
    
    while(a>0){ 
        r = a%10 ;
        sum = sum*10 + r ;
        a = a/10 ;
    }
    if(sum==temp){
        printf("%d is palindrome\n",temp);
    }
    else{
        printf("%d not palindrome\n",temp);
    } 
   }
}
