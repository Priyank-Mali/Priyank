#include<stdio.h>
int main(){
   
    int num, name[20] , sum , salary, avg_salary;
    printf("enter number of employees: ");
    scanf("%d",&num);
   int i = 1;
    sum = 0 ;
    int temp = 0 ;

   while ( i<= num){

    printf("Enter employee name: ");
    scanf("%s",&name);
    printf("Enter his salary: ");
    scanf("%d",&salary); 
    sum = sum + salary ;
    avg_salary = temp + salary ;
    i++ ;
   } 
   printf("the sum of salaries are :%d\n",sum);
   printf("the avg salary is :%d ",avg_salary/num);
   
   // int avg = sum / num
   // sum = ;
   // printf("The average salary is: %d",avg);

}