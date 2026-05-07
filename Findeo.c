#include <stdio.h>

int main(){
    
    int num;

    printf("Welcome to odd even number checker\n");

    printf("Kindly enter the number");

    scanf("%d",&num);

    if (num%2==0)
    {
      printf("Your Entered Number %d is even",num);
    }
    else {
       printf("Your Entered Number %d is odd",num);
    }
    
    

}