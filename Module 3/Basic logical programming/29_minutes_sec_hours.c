#include<stdio.h>
int main(){
    int minutes, sec , hours ;

    printf("Enter minutes value: ");
    scanf("%d",&minutes);

    sec = minutes*60;
    hours = minutes/60;

    printf("The convert value of %d minutes into seconds is: %d \n",minutes,sec);
    printf("The convert value of %d minutes into hour is: %d ",minutes,hours);
    }
