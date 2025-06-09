#include<iostream>
#include<vector>
using namespace std;
void printAllSubsequences(int index, vector<int>& ds, int arr[], int n ) {
    if (index == n) {
        for(auto it : ds) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    //take
    ds.push_back(arr[index]);
    printAllSubsequences(index + 1, ds, arr, n);
    //not take
    ds.pop_back();
    printAllSubsequences(index + 1, ds, arr, n);
    
}
int main() {
    int arr[] = {3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    cout << "All Subsequences are: " << endl;
    printAllSubsequences(0, ds, arr, n);
    return 0;
}