//Find area of rectangular prism.

#include<stdio.h>
int main(){
    int length,width,height,area;

    printf("enter length of rec_prism :");
    scanf("%d",&length);
    printf("enter width of rec_prism :");
    scanf("%d",&width);
    printf("enter height of rec_prism :");
    scanf("%d",&height);

    area =  2 * ((length * width) + (width * height) + (length * height));

    printf("area of rec_prism:%d",area) ;

    }