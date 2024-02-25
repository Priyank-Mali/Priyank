#include<stdio.h>
int main(){
    int physics,chemistry,maths,sum;
    printf("Enter obtained marks in physics: ");
    scanf("%d",&physics);
    printf("Enter obtained marks in chemistry: ");
    scanf("%d",&chemistry);
    printf("Enter obtained marks in maths: ");
    scanf("%d",&maths);

    sum = physics+chemistry+maths;
    printf("Total marks obtained: %d ",sum);

    if(maths>=65 && physics>=55 && chemistry>=50 && sum>=190){
        printf("\nThe candidate is eligible for admission");
    }
    else
        printf("\nThe candidate is not eligible for admission");

}