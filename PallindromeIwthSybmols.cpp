#include <iostream>
#include <cctype>  // For isalnum() and tolower()
#include <string>

using namespace std;

class Solution {
public:
    bool saveIronman(string ch) {
        int left = 0, right = ch.size() - 1;
        
        while (left < right) {
            // Skip non-alphanumeric characters from the left
            while (left < right && !isalnum(ch[left])) {
                left++;
            }
            // Skip non-alphanumeric characters from the right
            while (left < right && !isalnum(ch[right])) {
                right--;
            }

            // Convert both characters to lowercase and compare
            if (tolower(ch[left]) != tolower(ch[right])) {
                return false;  // Not a palindrome
            }

            left++;
            right--;
        }

        return true;  // Is a palindrome
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Ignore newline after integer input

    while (t--) {
        string s;
        getline(cin, s);  // Read entire line including spaces

        Solution obj;
        cout << (obj.saveIronman(s) ? "YES" : "NO") << endl;
    }

    return 0;
}
