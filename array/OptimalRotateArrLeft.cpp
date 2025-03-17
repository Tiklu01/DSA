#include<iostream>
using namespace std;
void LeftRotateArrByDplaces(int arr[], int n, int d)
{
   reverse(arr, arr+d);
   reverse(arr+d, arr+n);
   reverse(arr, arr+n);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    LeftRotateArrByDplaces(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}