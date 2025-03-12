#include <iostream>  // For input-output
#include <string>    // For string operations

using namespace std;

class Solution {
public:
    bool Rotation(string s1, string s2) {
        // If lengths are different, they can't be rotations of each other
        if (s1.size() != s2.size()) {
            return false;
        }
        
        // Concatenate s1 with itself to cover all possible rotations
        string temp = s1 + s1;
        
        // Check if s2 is a substring of temp
        // If s2 is found, find() returns the starting index, otherwise it returns string::npos
        if (temp.find(s2) != string::npos) {
            return true;
        }
        
        return false;
    }
};

int main() {
    int t;  // Number of test cases
    cin >> t;
    
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;  // Take input for both strings
        
        Solution obj;
        cout << obj.Rotation(s1, s2) << endl;  // Output 1 (true) if rotation, otherwise 0 (false)
    }
    
    return 0;
}
