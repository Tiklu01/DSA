//program to check if a subsequence with sum k is present or not
#include<iostream>
using namespace std;
bool isPresent(int ind, int arr[], int n, int k, int sum){
    if(ind == n){
        if (sum == k){
            return true; // Found a valid subsequence
        }
        return false; // Not a valid subsequence
    }
    //take
    sum+= arr[ind];
    if(isPresent(ind + 1, arr, n, k, sum) == true) return true; // If found, return true
    sum-=arr[ind];
    if(isPresent(ind + 1, arr, n, k, sum) == true) return true;
    else return false;
}
int main() {
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Desired sum
    cout << "Is a subsequence with sum " << k << " present? " << endl;
    if(isPresent(0, arr, n, k, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
// Output: Is a subsequence with sum 2 present? Yes
