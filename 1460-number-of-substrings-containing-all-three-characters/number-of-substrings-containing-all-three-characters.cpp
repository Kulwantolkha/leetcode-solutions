class Solution {
public:
    int numberOfSubstrings(string s) {
        int r=0;
        int cnt=0;
        vector<int> hsmpp(3,-1);
        while(r<s.length()){
            hsmpp[s[r]-'a'] = r;
            if(hsmpp[0]!=-1 && hsmpp[1]!=-1 && hsmpp[2]!=-1){
                cnt = cnt + 1 + min({hsmpp[0],hsmpp[1],hsmpp[2]});
            }
            r++;
        }
        return cnt;
    }
};