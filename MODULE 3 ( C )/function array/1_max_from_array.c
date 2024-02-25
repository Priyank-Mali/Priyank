#include<stdio.h>
int main(){
    int arr[5] = {1,4,35,6,4} ;
    int max = -1 ;

    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The maximum number is: %d",max);
    

    
}