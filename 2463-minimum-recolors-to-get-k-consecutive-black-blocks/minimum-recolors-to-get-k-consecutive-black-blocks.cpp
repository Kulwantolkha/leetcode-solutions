class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int ans = INT_MAX;
        int black = 0;
        for(int i=0;i<blocks.size();i++){
            if(i-k>=0 && blocks[i-k]=='B')  black--;
            if(blocks[i]=='B')   black++;
            ans = min(ans,k-black);
        }
        return ans;
    }
};