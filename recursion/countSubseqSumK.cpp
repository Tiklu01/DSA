//count the number of subsequences with sum k
#include<iostream>
using namespace std;
int printKsumSubsequences(int ind,  int arr[], int n, int k, int sum){
    if(ind == n){
        if(sum == k){
            return 1;
        }
        return 0;
    }
    //take
    sum+=arr[ind];
    int l = printKsumSubsequences(ind + 1,  arr, n, k, sum);
    //not take
    sum -= arr[ind];

    int r = printKsumSubsequences(ind + 1,  arr, n, k, sum);
    return l + r; // Return the total count of valid subsequences
}
int main() {
    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    int k = 2; // Desired sum
    cout << "Count of Subsequences with sum " << k << " are: " << endl;
    cout << printKsumSubsequences(0, arr, n, k, 0) << endl;
    
    return 0;
}
