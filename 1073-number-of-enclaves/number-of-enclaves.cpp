class Solution {
public:
    void dfs(vector<vector<bool>>& vis,vector<vector<int>>& grid, int i, int j, int n, int m){
        vis[i][j] = true;
        grid[i][j] = -1;
        vector<int> hdir = {0,-1,0,1};
        vector<int> vdir = {-1,0,+1,0};
        for(int k=0;k<4;k++){
            int newx = i+hdir[k];
            int newy = j+vdir[k];
            if(newx>=0 && newx<n && newy>=0 && newy<m && !vis[newx][newy] && grid[newx][newy]==1){
                dfs(vis,grid,newx,newy,n,m);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        if(grid.empty())    return 0;
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));

        for(int i=0;i<m;i++){
            if(grid[0][i]==1 && !vis[0][i]){
                dfs(vis,grid,0,i,n,m);
            }
            if(grid[n-1][i] && !vis[n-1][i]){
                dfs(vis,grid,n-1,i,n,m);
            }
        }

        for(int i = 0; i < n;i++){
            if(grid[i][0] && !vis[i][0]){
                dfs(vis,grid,i,0,n,m);
            }
            if(grid[i][m-1] && !vis[i][m-1]){
                dfs(vis,grid,i,m-1,n,m);
            }
        }

        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};