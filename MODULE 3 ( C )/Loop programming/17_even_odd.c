#include <stdio.h>

int main() {
    int a,count=1, sum = 0;    

    while (count <= 5) {
        printf("Enter number %d : ",count);
        scanf("%d", &a);
        if(a%2==0){
            printf("The number is even\n");
        }
        else{
            printf("The number is odd\n");
        }
        count++;
    }
    
}
