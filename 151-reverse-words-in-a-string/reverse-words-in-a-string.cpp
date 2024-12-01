class Solution {
public:
    string reverseWords(string s) {
        string word;
        vector<string> strvecc;
        for(char ch : s){
            if(ch==' '){
                if(!word.empty()){
                    strvecc.push_back(word);
                    word.clear();
                }
            }
            else{
                word.push_back(ch);
            }
        }
        if(!word.empty()){
            strvecc.push_back(word);
        }
        string fi;
        for(int i=strvecc.size()-1;i>=0;i--){
            fi+=strvecc[i];
            if(i>0) fi+=' ';
        }
        return fi;
    }
};