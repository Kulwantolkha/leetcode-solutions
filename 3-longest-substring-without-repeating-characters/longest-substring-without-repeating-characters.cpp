class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int n = s.length();
        if(n==0)    return 0;
        int left = 0;
        int right = 0;
        int maxi = INT_MIN;
        while(right < n){
            if(mpp[s[right]]!=-1){
                left = max(left,mpp[s[right]]+1);
                // left = mpp[s[right]]+1;
            }
            mpp[s[right]]=right;
            maxi = max(maxi,right-left+1);
            right++;
        }
        return maxi;
    }
};