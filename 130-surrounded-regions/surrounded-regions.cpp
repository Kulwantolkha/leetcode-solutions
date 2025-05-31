class Solution {
public:
    void dfs(vector<vector<char>>& board, vector<vector<bool>>& vis, int i, int j, int n, int m) {
        vis[i][j] = true;
        vector<int> xrel = {0, -1, 0, 1};
        vector<int> yrel = {-1, 0, 1, 0};

        for (int dir = 0; dir < 4; dir++) {
            int newx = i + xrel[dir];
            int newy = j + yrel[dir];
            if (newx >= 0 && newx < n && newy >= 0 && newy < m && board[newx][newy] == 'O' && !vis[newx][newy]) {
                dfs(board, vis, newx, newy, n, m);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        int n = board.size();
        int m = board[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O' && !vis[0][j])
                dfs(board, vis, 0, j, n, m);
            if (board[n-1][j] == 'O' && !vis[n-1][j])
                dfs(board, vis, n-1, j, n, m);
        }

        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O' && !vis[i][0])
                dfs(board, vis, i, 0, n, m);
            if (board[i][m-1] == 'O' && !vis[i][m-1])
                dfs(board, vis, i, m-1, n, m);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
