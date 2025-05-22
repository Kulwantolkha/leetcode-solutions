class Solution {
public:
    void markrow(vector<vector<int>>& matrix, int i){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]!=0){
                matrix[i][j] = INT_MIN+16;
            }
        }
    }
    void markcol(vector<vector<int>>& matrix, int j){
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][j]!=0) matrix[i][j]= INT_MIN+16;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        bool b = false; 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    b = true;
                    markrow(matrix,i);
                    markcol(matrix,j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==INT_MIN+16){
                    if(b==true) matrix[i][j]=0;
                }
            }
        }
    }
};