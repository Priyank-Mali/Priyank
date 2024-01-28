//Find area of triangle.

#include<stdio.h>
int main(){
   float length,base ;
   float area;
   printf("enter length of triangle:");
   scanf("%f",&length);

   printf("enter base of triangle:");
   scanf("%f",&base);

   area = (length * base)*1/2;

   printf("area of triangle:%f",area);

}