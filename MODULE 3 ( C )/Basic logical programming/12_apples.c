// Accept number of student from user.i need to give 5
// apple to each student.How many apples are required? 

#include<stdio.h>
int main(){

    int num;
    printf("Enter number of student in class: ");
    scanf("%d",&num);

    printf("Each student get 5 apples compulsory.");

    printf("\nTotal Apples required: %d",num*5);
}