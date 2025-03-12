#include <stdio.h>
 int input(){
     int element;
     printf("Enter a value to search = ");
     scanf("%d",&element);
     return element;
 }

 void linearSearch(int arr[],int size, int index, int element,int pos ){
   for(int i = index; i<size-1; i++ ){
     if(arr[i]==element){
         printf("%d found at location %d",element,i+1);
         pos = 1;
         break;
      }
      
      }  
      if(pos==-1){
        printf("\n Element not found!\n");  
      }
        
 
 }

int main()
{
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = input(), index = 0,pos= -1;
    linearSearch(arr,size,index,element,pos);
    return 0;
}