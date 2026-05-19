#include <stdio.h>
int arr[10];
   int size;
   int pose = 0;
   int i = 0;
   int value;
   void addElement(); //This is called method declration which is vimp in c language 
   void showElement(); // without this it throws an error of implicit declaration


int main ()
{
   
   printf("Enter size of an array\t");
   scanf("%d",&size);

   printf("Add element in array \n");

   for(i=0;i<size;i++){

    addElement();

   }
   

   showElement();

    return 0;
}


void addElement (){

         
        scanf("%d",&value);

        arr[pose]=value;

        pose++;
        
        
   
}

void showElement(){
    for(i=0;i<size;i++){

        printf("%d\t",arr[i]);
    }
}
