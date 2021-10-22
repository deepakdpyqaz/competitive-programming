// https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        int n = nums.size();
        vector<int> dup;
        vector<int> temp;
        for(int i=0;i<n;i++){
            if(nums[i]==target/2 && target%2==0){
                dup.push_back(i);
            }
            index[nums[i]]=i;
        }
        if(dup.size()>1){
            temp = {dup[0],dup[1]};
            return temp;
        }

        for(int i=0;i<n;i++){
            auto it = index.find(target-nums[i]);
            if(it!=index.end() && it!=index.find(nums[i])){
                temp = {min(i,it->second),max(i,it->second)};
            }
        }
        return temp;
    }
};