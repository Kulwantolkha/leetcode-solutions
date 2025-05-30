class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j] = true;
                }
            }
        }
        vector<int> hori = {-1,0,1,0};
        vector<int> vert = {0,-1,0,1};
        while(!q.empty()){
            int row = q.front().first.first;
            int col = q.front().first.second;
            int steps = q.front().second;
            q.pop();
            ans[row][col] = steps;
            for(int i=0;i<4;i++){
                int newrow = row+hori[i];
                int newcol = col+vert[i];
                if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && !vis[newrow][newcol]){
                    q.push({{newrow,newcol},steps+1});
                    vis[newrow][newcol] = true;
                }
            }
        }
        return ans;
    }
};