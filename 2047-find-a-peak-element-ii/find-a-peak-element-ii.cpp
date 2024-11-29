class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            int mR = 0;
            for(int i=0;i<mat.size();i++){
                if(mat[i][mid]>mat[mR][mid])    mR = i;
            }
            int cE = mat[mR][mid];
            int leftEle = mid==0 ? -1 : mat[mR][mid-1];
            int rightEle = mid==(mat[0].size()-1) ? -1 : mat[mR][mid+1];
            if(cE > leftEle && cE > rightEle)   return {mR,mid};
            else if(cE<rightEle)   low = mid+1;
            else    high = mid-1;
        }
        return {-1,-1};
    }
};