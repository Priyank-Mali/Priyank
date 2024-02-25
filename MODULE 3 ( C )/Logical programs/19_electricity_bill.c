#include<stdio.h>
int main(){
    float x,total;
    printf("Enter unit comsumed: ");
    scanf("%f",&x);

     if(x==0) {
        printf("The minimum amount to be paid is : 256 /-");
    }
    else if(x>0 && x<350){
        printf("Total amount to be paid is: %f /-",x*1.20);
    }
    else if(x>=350 && x<600){
        total = x*1.50;
        if(total > 800 ){
            printf("Total amount to be paid is %f + 18%% surcharge = %f /-",total,total + (total*18/100));
        }
        else
            printf("Total amount to be paid is: %f /-",total);
        
    }
    else if(x>=600 && x<800){
        total = x*1.80 ;
            printf("Total amount to be paid is %f + 18%% surcharge = %f /-",total,total + (total*18/100));
       
    }
    else if(x>=800){
        total = x*2.00 ;
        printf("Total amount to be paid is %f + 18%% surcharge = %f /-",total,total + (total*18/100));
    }
    
}