#include<stdio.h>
int main(){
    int arr1[5],arr2[5];

    for (int i=0;i<5;i++){
    printf("Enter element number %d : ",i);
    scanf("%d",&arr1[i]);
    }
    printf("Array 1 is: ");
    for (int i=0;i<5;i++){
    printf("%d ",i);
    }

    for (int j=0;j<5;j++){
    printf("\nEnter element number %d : ",j);
    scanf("%d",&arr2[j]);
    }
     printf("Array 2 is: ");
    for (int j=0;j<5;j++){
    printf("%d ",j);
    }

}