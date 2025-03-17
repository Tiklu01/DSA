#include<iostream>
using namespace std;
void RightRotateArrByDplaces(int arr[], int n, int d)
{
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i+(n-d)];
    }
    for(int i=n-1; i>=d; i--){
        arr[i] = arr[i-d];
    }
    for(int i=0; i<d; i++){
        arr[i] = temp[i];
    }
    // cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 3;
    RightRotateArrByDplaces(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}