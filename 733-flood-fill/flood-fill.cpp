class Solution {
public:
    void colorthepixels(vector<vector<int>>& image, int sr, int sc, int color,int inicol) {
        if(inicol==color)   return;
        int x[] = {0, -1, 0, +1};
        int y[] = {-1, 0, +1, 0};
        queue<pair<int, int>> q;
        q.push({sr, sc});
        while (!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            if (image[row][col] == inicol) {
                image[row][col]=color;
                for (int i = 0; i < 4; i++) {
                    int newr = row + x[i];
                    int newc = col + y[i];
                    if (newr >= 0 && newr < image.size() && newc >= 0 &&
                        newc < image[0].size() && image[newr][newc] == inicol) {
                            q.push({newr,newc});
                    }
                }
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int color) {
        int inicol = image[sr][sc];
        colorthepixels(image, sr, sc, color, inicol);
        return image;
    }
};