class Solution {
public:
    bool checkPalindrome(string str,int st,int ed) {
        while(st<ed){
            if(str[st]!=str[ed]) {
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int st = 0;
        int ed = s.size()-1;
        while(st<ed) {
            if(s[st]!=s[ed])    return checkPalindrome(s, st+1,ed) || checkPalindrome(s,st,ed-1);
            st++;
            ed--;
        }
        return true;
    }
};