// https://leetcode.com/problems/reshape-the-matrix/submissions/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c){
            return mat;
        }
        
        vector<int> flatten;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                flatten.push_back(mat[i][j]);
            }
        }
        vector<vector<int>> answer;
        for(int i=0;i<r;i++){
            vector<int> temp;
            for(int j=0;j<c;j++){
                temp.push_back(flatten[i*c+j]);
            }
            answer.push_back(temp);
        }
        return answer;
    }
};