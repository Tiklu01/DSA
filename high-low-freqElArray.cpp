#include<iostream>
#include<map>
using namespace std;
void printFrequency(int arr[], int n){
    map<int,int> mpp;
    for(int i=0; i<n ;i++){
        mpp[arr[i]]++;
    }
    int maxFreq = 0;
    int minFreq = n;
    int maxEl = 0, minEl = 0;
    for(auto it : mpp){
        int count = it.second;
        int element = it.first;
        if(count > maxFreq){
            maxFreq = count;
            maxEl = element;
        }
        if(count < minFreq){
            minFreq =  count;
            minEl = element;
        }
    }
    cout<<"Max frequency element: "<<maxEl<<" with frequency: "<<maxFreq<<endl;
    cout<<"Min frequency element: "<<minEl<<" with frequency: "<<minFreq<<endl;
   
}
int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printFrequency(arr, n);
    return 0;
}