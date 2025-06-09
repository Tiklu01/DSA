#include<iostream>
#include<vector>
using namespace std;
void printKsumSubsequences(int ind, vector<int> &ds, int arr[], int n, int k, int sum){
    if(ind == n){
        if(sum == k){
            for(auto it : ds){
                cout<< it<< " ";
            }
            cout <<endl;
        }
        return;
    }
    //take
    ds.push_back(arr[ind]);
    sum+=arr[ind];
    printKsumSubsequences(ind + 1, ds, arr, n, k, sum);
    //not take
    sum -= arr[ind];
    ds.pop_back();
    printKsumSubsequences(ind + 1, ds, arr, n, k, sum);
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
