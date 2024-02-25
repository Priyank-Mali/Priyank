#include<stdio.h>
#include<math.h>
int main(){
    int t;
    printf("Enter temperature reading: ");
    scanf("%d",&t);

    if(t<0){
        printf("Freezing Weather");
    }
    else if(t<10){
        printf("Very Cold Weather");
    } 
    else if(t>10 && t<20){
        printf("Cold Weather");
    } 
    else if(t>20 && t<30){
        printf("Normal Temperature");
    }
    else if(t>30 && t<40){
        printf("Hot weather");
    }
    else
        printf("Very Hot Weather");
}