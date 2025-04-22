#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int rob(vector<int>& nums){
            int rob1 = 0, rob2 = 0;
            for(int i=0; i<nums.size(); i++){
                int temp =  max(rob1+nums[i], rob2);
                rob1 = rob2;
                rob2 = temp;
            }
            return rob2;
        }
    };
int main() {
    Solution s;
    vector<int> houses = {2, 3, 2, 5, 7, 8};  // circular houses
    cout << "Max amount robbed: " << s.rob(houses) << endl;
    return 0;
}