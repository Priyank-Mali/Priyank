#include<stdio.h> // 0 1 1 2 3 5 8 ..
int main(){
    int x,a=0,b=1;;
    printf("first fibonacci numbers: ");
    scanf("%d",&x);
    printf("%d %d ",a,b);
    
    for(int i=1;i<=x-2;i++){
        int  sum = a+b;
        a=b;
        b=sum; 
        printf("%d ",sum);
    }


}