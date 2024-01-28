#include<stdio.h>
int main(){
    int a;
    printf("Enter week number(1-7): ");
    scanf("%d",&a);
    if(a==1){
        printf("MONDAY");
    }
    else if(a==2){
        printf("TUESDAY");
    }
    else if(a==3){
        printf("WEDNESDAY");
    }
    else if(a==4){
        printf("THRUSDAY");
    }
    else if(a==5){
        printf("FRIDAY");
    }
    else if(a==6){
        printf("SATURDAY");
    }
    else{
        printf("SUNDAY");
    }

}