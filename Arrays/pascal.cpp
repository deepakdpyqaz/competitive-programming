// https://leetcode.com/problems/pascals-triangle/submissions/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i=1;i<=numRows;i++){
            vector<int> temp(i);
            temp[0]=1;
            temp[i-1]=1;
            for(int j=1;j<i-1;j++){
                temp[j]=answer[i-2][j]+answer[i-2][j-1];
            }
            answer.push_back(temp);
        }
        return answer;
    }
};