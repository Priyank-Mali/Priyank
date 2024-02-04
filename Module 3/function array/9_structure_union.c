#include <stdio.h> 

struct student { 
	int id; 
	char name[20]; 
	float percentage;
}s1; 

union student1 {
    int id;
    char name[20];
    float percentage;
}s2;
 
int main() 
{
	
	printf("Enter students details:\n");

	printf("Enter student id: ");
    scanf("%d",&s1.id); 
	printf("Enter student name: ");
    scanf("%s",&s1.name);
	printf("Enter student percentage: ");
    scanf("%f",&s1.percentage);

    printf("Enter student id: ");
    scanf("%d",&s2.id); 
	printf("Enter student name: ");
    scanf("%s",&s2.name);
	printf("Enter student percentage: ");
    scanf("%f",&s2.percentage);


    printf("\nDetails of student 1 : %d %s %f ",s1.id,s1.name,s1.percentage);
    
    printf("\nDetails of student 2 : %d %s %f ",s2.id,s2.name,s2.percentage);

}
