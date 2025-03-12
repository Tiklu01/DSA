#include<iostream>
#include<algorithm>
using namespace std;

void selectionSort(int arr[],int n){
 
   for(int i=0; i<n-1; i++){
        int min_indx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]){
                min_indx = j;
            }
        }
        if(min_indx != i){
                swap(arr[min_indx],arr[i]);
            }
    }

   }
void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[5] = {1,2,5,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr,size);
    cout<<"Sorted array = "<<endl;
    selectionSort(arr,size);
    printArr(arr,size);
    return 0;
}

