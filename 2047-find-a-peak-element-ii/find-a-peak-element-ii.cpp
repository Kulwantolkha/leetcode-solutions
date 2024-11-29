class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int maxEle = -1;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int a = *max_element(mat[i].begin(),mat[i].end());
            maxEle = max(a,maxEle);
        }
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==maxEle){
                    return {i,j};
                }
            }
        }
        return {-1,-1};
    }
};