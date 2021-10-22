// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<pair<int,int>> minmax;
        int n = prices.size();
        int minSoFar = INT_MAX;
        int maxSoFar = INT_MIN;
        for(int i=0;i<n;i++){
            minmax.push_back({min(minSoFar,prices[i]),maxSoFar});
            minSoFar = min(minSoFar,prices[i]);
        }
        for(int i=n-1;i>=0;i--){
            minmax[i].second = max(maxSoFar,prices[i]);
            maxSoFar = max(maxSoFar,prices[i]);
        }
        int maxPro = INT_MIN;
        for(auto elem: minmax){
            maxPro = max(maxPro,elem.second-elem.first);
        }
        return maxPro;
    }
};