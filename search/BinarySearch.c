#include<stdio.h>
void main(){
    int i,first,last,mid,n,search,arr[100];
    printf("\n Enter the number of elements in array - ");
    scanf("%d",&n);
    printf("Enter the elements in ascemding order = ");
     for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     printf("\n Enter value to search = ");
     scanf("%d",&search);
     first = 0;
     last = n-1;
     mid = (first+last)/2;
     while(first<=last){
        
       if(arr[mid]<search){
        first = mid+1;
       }
       else if(arr[mid]==search){
        printf("\n %d found at the position %d\n",search,mid+1);
        break;
       }
       else{
        last = mid-1;
       }
        mid = (first+last)/2;
     }
     if(first>last){
        printf("%d not found !",search);
     }
    }