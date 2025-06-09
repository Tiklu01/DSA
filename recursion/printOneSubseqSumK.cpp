#include<iostream>
#include<vector>
using namespace std;
bool printKsumSubsequences(int ind, vector<int> &ds, int arr[], int n, int k, int sum){
    if(ind == n){
        if(sum == k){
            for(auto it : ds){
                cout<< it<< " ";
            }
            cout <<endl;
            return true; // Found a valid subsequence
        }
        else return false; // Not a valid subsequence
    }
    //take
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    if(printKsumSubsequences(ind + 1, ds, arr, n, k, sum)==true) return true; // If found, return true
    //not take
    sum -= arr[ind];
    ds.pop_back();
    if(printKsumSubsequences(ind + 1, ds, arr, n, k, sum)==true) return true; // If found, return true
    return false; // No valid subsequence found
}
int main() {
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    int k = 2; // Desired sum
    cout << "All Subsequences with sum " << k << " are: " << endl;
    printKsumSubsequences(0, ds, arr, n, k, 0);
    return 0;
}
