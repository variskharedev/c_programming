#include <stdio.h>

// int main(){

//     int age;

//     printf("Enter YOur age please\n");

//     scanf("%d",&age);

//     printf("your age is: %d",age);

//     return 0;

// }

// HERE TAKING INPUT NAME TO PRINT ENTERED NAME USING CHARACTER ARRAY

// int main(){
    
//     char name[20];

//     printf("Enter your name\n");
    
//     scanf("%s",name);
    
//     printf("Your Name is:%s",name);

//     return 0;

// }

// NOW WILL USE FGETS FUNCTION TO PRINT NAME WITH SPACES

int main (){
    
    char name[20];
    
    printf("Enter your fullname\n");

    fgets(name,20,stdin);

    printf("hello %s",name);
}