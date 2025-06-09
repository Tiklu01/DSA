#include <iostream>
#include <string>
#include <vector>
using namespace std;
pair<int,int> expandAroundCenter(const string &s, int left, int right){
    while(left>=0 && right<=s.length() && s[left]==s[right]){
        left--;
        right++;
    }
    return {left+1, right-1};
}
string longestPalindrome(const string &s) {
    if(s.empty()) return "";
    int start = 0, end = 0;
    for(int i=0; i<s.length();i++){
        auto [left1,right1] = expandAroundCenter(s,i,i); // Odd length palindrome
        auto [left2,right2] = expandAroundCenter(s,i,i+1); // Even length palindrome
        if( right1-left1 > end - start){
            start = left1;
            end = right1;
        }
        if(right2-left2 >end-start){
            start = left2;
            end = right2;
        }
    }
    return s.substr(start, end-start+1);
}
    int main() {
        string input1 = "babad";
        string input2 = "cbbd";
    
        // cout << "Using Dynamic Programming:" << endl;
        // cout << "Input: " << input1 << " => Output: " << longestPalindromeDP(input1) << endl;
        // cout << "Input: " << input2 << " => Output: " << longestPalindromeDP(input2) << endl;
    
        cout << "\nUsing Expand Around Center:" << endl;
        cout << "Input: " << input1 << " => Output: " << longestPalindrome(input1) << endl;
        cout << "Input: " << input2 << " => Output: " << longestPalindrome(input2) << endl;
    
        return 0;
    }
    