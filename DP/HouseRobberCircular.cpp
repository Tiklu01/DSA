#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int robrange(vector<int>& nums,int start,int end) {
            int rob1 = 0, rob2 = 0;
            for(int i=start;i<=end;i++){
                int temp = max(rob1+nums[i],rob2);
                rob1=rob2;
                rob2=temp;
            }
            return rob2;
        }
        int rob(vector<int>& nums){
            int n = nums.size();
            if (n == 1) return nums[0];
            return max(
                robrange(nums,0,n-2),
                robrange(nums,1,n-1)
            );
        }
    };
int main() {
    Solution s;
    vector<int> houses = {2, 3, 2, 5, 7, 8};  // circular houses
    cout << "Max amount robbed: " << s.rob(houses) << endl;
    return 0;
}