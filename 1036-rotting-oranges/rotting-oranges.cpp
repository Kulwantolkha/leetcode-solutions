class Solution {
public:
    int bfs(vector<vector<int>>& grid,int& cnt){
        int m = grid.size();
        int n = grid[0].size();
        int x[] = {0,-1,0,+1};
        int y[] = {-1,0,+1,0};
        queue<pair<int,int>> q;
        int fresh = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        if(fresh==0)    return 0;
        while(!q.empty()){
            int sze = q.size();
            bool flag = false;
            for(int i=0;i<sze;i++){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                for(int j=0;j<4;j++){
                    int nrow = row + x[j];
                    int ncol = col + y[j];
                    if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==1){
                        fresh--;
                        q.push({nrow,ncol});
                        grid[nrow][ncol] = 2;
                        flag = true;
                    }
                }
            }
            if(flag == true)    cnt++;
        }
        if(fresh!=0)    return -1;
        return cnt;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int cnt = 0;
        int ans = bfs(grid,cnt);
        return ans; 
    }
};