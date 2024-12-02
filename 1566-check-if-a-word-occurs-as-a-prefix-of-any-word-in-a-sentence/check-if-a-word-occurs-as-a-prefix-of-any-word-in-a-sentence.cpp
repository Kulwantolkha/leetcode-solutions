class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len = searchWord.length();
        int cnt = 1;
        if(sentence.substr(0,len)==searchWord){
            return cnt;
        }
        if(sentence.length()<searchWord.length()){
            return -1;
        }
        for(int i=1;i<sentence.length()-len;i++){
            if(sentence[i]==' '){
                cnt++;
                if (i + 1 + len <= sentence.length() && sentence.substr(i + 1, len) == searchWord) {
                    return cnt;
                }
            }
            else{
                continue;
            }
        }
        return -1;
    }
};