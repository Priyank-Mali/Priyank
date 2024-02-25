// Accept monthly salary from the user and deduct 10% insurance premium,
// 10% loan installment find out of remaining salary.

#include<stdio.h>
int main(){

    int salary ;
    printf("person annual salary: ");
    scanf("%d",&salary);
    
    int premium = salary * .10;
    printf("Annual insurance premium:%d\n",premium);
    
    int loan = salary * .10 ;
    printf("Annual Loan: %d \n",loan);

    int remaining = salary - loan - premium ;

    printf("His reamining salary: %d",remaining);
}