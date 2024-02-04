#include<stdio.h>
int main(){
    int row,col,arr1[3][3],arr2[3][3],sum[3][3],sub[3][3],mul[3][3];
    printf("Enter values of array1 : ");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter values of array2 : ");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("Array1: ");
     for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr1[row][col]);
        }
    }
    printf("\nArray2: ");
     for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",arr2[row][col]);
        }
    }
    printf("\n addition of array1 and array2 : ");
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
           sum[row][col] = arr1[row][col] + arr2[row][col] ;
        }
    }
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",sum[row][col]);
        }
    }
    printf("\n subtraction of array1 and array2 : ");
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
           sub[row][col] = arr1[row][col] - arr2[row][col] ;
        }
    }
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",sub[row][col]);
        }
    }
     printf("\n multiplication of array1 and array2 : ");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            mul[row][col]=0;
            for(int k=0;k<col;k++){
                mul[row][col]+= arr1[row][k]*arr2[k][col];
            }
         }
    }
    for(row=0;row<3;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d ",mul[row][col]);
        }
    }
   


}