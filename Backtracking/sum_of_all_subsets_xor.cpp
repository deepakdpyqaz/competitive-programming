// https://leetcode.com/problems/sum-of-all-subset-xor-totals/
class Solution {
    int answer = 0;
public:
    void subsetHelper(vector<int>& nums,int i,int n,int ans){
        if(i==n){
            answer+=ans;
            return;
        }
        ans = ans^nums[i];
        subsetHelper(nums,i+1,n,ans);
        ans = ans^nums[i];
        subsetHelper(nums,i+1,n,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        subsetHelper(nums,0,nums.size(),0);
        return answer;
    }
};