#include<stdio.h>
int main(){
    int a;
    printf("Enter month number: ");
    scanf("%d",&a);

    if(a==1){
        printf("JANUARY (31 days)");
    }
    else if(a==3){
        printf("MARCH (31 days)");
    }
    else if(a==4){
        printf("APRIL (30 days)");
    }
    else if(a==5){
        printf("MAY (31 days)");
    }
    else if(a==6){
        printf("JUNE (30 days)");
    }
    else if(a==7){
        printf("JULY (31 days)");
    }
    else if(a==8){
        printf("AUGUST (31 days)");
    }
    else if(a==9){
        printf("SEPTEMBER (30 days)");
    }
    else if(a==10){
        printf("OCTOBER (31 days)");
    }
    else if(a==11){
        printf("NOVEMBER (30 days)");
    }
    else if(a==12) {
        printf("DECEMBER (31 days)");
    }
    else{
        printf("FEBRUARY (28 or 29 days)");
    }
}