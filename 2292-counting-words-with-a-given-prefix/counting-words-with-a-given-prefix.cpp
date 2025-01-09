class Solution {
public:
    bool prefixorNot(string str, string pref){
        int n1 = str.size();
        int n2 = pref.size();
        return str.substr(0,n2)==pref;
    }
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(int i=0;i<words.size();i++){
            if(prefixorNot(words[i],pref))  cnt++;
        }
        return cnt;
    }
};