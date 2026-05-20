#include <stdio.h>
int arr[10];
   int size;
   int pose = 0;
   int i = 0;
   int value;
   int posi;
   int addele;
   int ind;
   int upd;

   void addElement(); //This is called method declration which is vimp in c language 
   void showElement(); // without this it throws an error of implicit declaration
   void insertElement();
   void deleteElement();
   void updateElement();

int main ()
{
   
   printf("Enter size of an array\t");
   scanf("%d",&size);

   printf("Add element in array \n");

   for(i=0;i<size;i++){

    addElement();

   }

   showElement();
   
  // insertElement();

   updateElement();

   //deleteElement();

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

//Here, we are adding elemnt in a particular position

void insertElement(){
 
    printf("Enter the position\n");

    scanf("%d",&posi);

    printf("give element to be added");
    scanf("%d",&addele);

    for(int i=size;i>=posi;i--){ //Here loop is starting from the total size of an array beacuse we need to
                                
        arr[i] = arr[i-1];   //increment the element position by one everytime

    }

    arr[posi-1] = addele; //After iteration by reaching the particular index have to put the value entered by user
     size++; // yaha size ko increase kiya kyuki element add hua to iteration mai value badhna chaiye 
    

}


void deleteElement ()
{
   printf("Enter Index number you want to delete\t");

   scanf("%d",&ind);

   for(int i = ind;i<size;i++){
 
      arr[i] = arr[i+1];
   }


}

void updateElement()
{
    printf("Enter the position you want to update\n");
    scanf("%d",&upd);

    printf("Enter the value\n");
    scanf("%d",&value);

    arr[upd-1] = value;

}