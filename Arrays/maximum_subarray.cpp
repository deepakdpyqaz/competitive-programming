// https://leetcode.com/problems/maximum-subarray/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int current_sum = 0;
        for(auto it:nums){
            current_sum +=it;
            if (max_sum<current_sum){
                max_sum = current_sum;
            }
            if(current_sum<=0){
                current_sum=0;
            }
        }
        int max_elem = INT_MIN;
        for(auto it:nums){
            max_elem = max(max_elem,it);
        }
        return max(max_sum,max_elem);
    }
};