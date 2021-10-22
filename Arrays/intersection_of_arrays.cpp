// https://leetcode.com/problems/intersection-of-two-arrays-ii/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> f1, f2;
        for(auto n: nums1){
            if(f1.find(n)!=f1.end()){
                f1[n]++;
            }
            else{
                f1[n]=1;
            }
        }
        for(auto n: nums2){
            if(f2.find(n)!=f2.end()){
                f2[n]++;
            }
            else{
                f2[n]=1;
            }
        }
        vector<int> solution;
        for(auto elem:f1){
            auto elem2 = f2.find(elem.first);
            if(elem2!=f2.end()){
                for(int i=0;i<min(elem2->second,elem.second);i++){
                    solution.push_back(elem.first);
                }
            }
        }
        return solution;
    }
};