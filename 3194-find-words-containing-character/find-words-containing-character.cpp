class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++){
            bool flag = false;
            int j=0;
            while(j!=words[i].length()){
                if(words[i][j]==x){
                    flag=true;
                    break;
                }
                j++;
            }
            if(flag==true)  ans.push_back(i);
        }
        return ans;
    }
};