
#include <iostream>
#include <map>
//can also use unordered_map
#include<unordered_map>
using namespace std;
void printFrequency(int arr[], int n){
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(auto x: freq){
        cout<<x.first<<" -> "<<x.second<<endl;
    }
}
int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printFrequency(arr, n);
    return 0;
}