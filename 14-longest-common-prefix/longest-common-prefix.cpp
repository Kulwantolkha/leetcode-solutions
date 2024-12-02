class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        if(strs.size()==1)  return strs[0];
        int mini = min(strs[0].length(),strs[strs.size()-1].length());
        string word;
        for(int i=0;i<mini;i++){
            if(strs[0][i]!=strs[strs.size()-1][i]){
                break;
            }
            word.push_back(strs[0][i]);
        }
        return word;
    }
};