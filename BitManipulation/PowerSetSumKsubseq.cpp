#include<iostream>
#include<vector>
using namespace std;
vector<string> allPossibleSubsequences(string s){
    vector<string> result;
   int n = s.length();
   for(int num = 0; num < (1<<n); num++){ //(1<<n) is 2^n, which gives all possible combinations
    string sub = "";
    for(int i = 0; i < n; i++){
        if(num & (1<<i)){ // Check if the ith bit is set in num
            // If the ith bit is set, include s[i] in the current subsequence
            // This means we are taking the character at index i
            // from the original string s to form the subsequence
            // This is a bit manipulation technique to generate subsequences
            // by treating the number as a bitmask
            // If the ith bit is set, we include the character at index i
            // in the current subsequence   
            sub+=s[i];
        }
    }
    if(sub.length()>0){
        result.push_back(sub);
    }
   }
   sort(result.begin(),result.end()); // optional sorting of subsequences
   return result;  
}

int main()
{


	string s="abc";
	vector<string>ans = allPossibleSubsequences(s);
	//printint all the subsequence.
	cout<<"All possible subsequences are "<<endl;
	for (auto it : ans) {
		cout << it << " ";
	}

}