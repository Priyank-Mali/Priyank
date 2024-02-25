#include<stdio.h>
int main(){
    float a,total;
    printf("Enter unit consumption: ");
    scanf("%f",&a);

    if(a<=50){
        total = (a*.50) ;    
    }
    else if(a<=150){
        total = 25 + (a-50)*.75  ;    
    }
    else if( a<=250){
        total = 25 + 75 + (a-150)*1.20 ;   
    }
    else{
        total = 25 + 75 + 120 + (a-250)*1.50 ;
    }
    float total_with_surcharge = total + (total*20/100) ;
    printf("Total electricity bill = %f",total_with_surcharge);
}