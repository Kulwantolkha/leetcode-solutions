class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int st=0,end=n;
        while(st<=end){
            swap(s[st],s[end]);
            end--;
            st++;
        }
    }
};