#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr) {
    if (arr.empty()) return 0; // Handle empty case

    int i = 0;
    for (int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j]; // Move the unique element forward
            i++;
        }
    }
    return i + 1; // The new length of the array
}

int main() {
    vector<int> arr = {5, 5, 10, 10, 10, 15}; // Already sorted

    int n = removeDuplicates(arr);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
