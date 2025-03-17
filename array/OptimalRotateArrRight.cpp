#include<iostream>
using namespace std;
void rotateRight(int arr[], int n, int d){
    d = d % n; // Handle cases where d > n
    reverse(arr, arr+(n-d)); // Reverse the entire array
    reverse(arr+(n-d), arr + n); // Reverse the first d elements
    reverse(arr, arr + n); // Reverse the remaining elements
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    rotateRight(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}