#include<stdio.h>
void merge(int a[],int beg , int mid , int end);
void merge_sort(int a[],int beg, int end);
void main(){
    int i,n;
    int arr[10];
    printf("\nEnter the number of elements in array = ");
    scanf("%d",&n);
    printf("\nEnter the elements = ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    merge_sort(arr,0,n-1);
    printf("\nSorted array is = ");
     for(i=0;i<n;i++){
           printf("%d\t",arr[i]);

    }

}
void merge(int arr[], int beg, int mid, int end){
int i = beg, j = mid+1, index = beg, temp[10] , k;
while((i<=mid) && (j<=end)){
    if(arr[i] < arr[j]){
        temp[index] = arr[i];
        i++;
    }
    else{
        temp[index] = arr[j];
        j++;
    }
    index++;
}
if(i>mid){
    while (j<=mid)
    {
        temp[index] = arr[j];
        j++;
        index++;
    }
}
    else{
        while (i<=mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
for(k=beg;k<index;k++){
    arr[k] = temp[k];
}
}
void merge_sort(int arr[], int beg, int end){
    int mid;
    if(beg<end){
    mid = (beg+end)/2;
    merge_sort(arr,beg,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,beg,mid,end);
    }
}