class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words.size();j++){
                string s1 = words[i];
                string s2 = words[j];
                if(i!=j){
                    if(s2.contains(s1)){
                        ans.push_back(s1);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};