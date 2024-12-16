class Solution {
public:
    int lenOfSubString(string s, int l, int r){
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
    string longestPalindrome(string s) {
        int st = 0;
        int ed = 0;
        int maxi = 0;
        for(int i=0;i<s.length();i++){
            int single = lenOfSubString(s,i,i);
            int d = lenOfSubString(s,i,i+1);
            maxi = max(single,d);
            if(maxi>ed-st){
                st = i-(maxi-1)/2;
                ed = i+(maxi)/2;
            }
        }
        return s.substr(st,ed-st+1);
    }
};