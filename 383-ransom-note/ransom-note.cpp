class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> mpp;
        for(int i=0;i<magazine.length();i++){
            mpp[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            if(mpp.find(ransomNote[i])!=mpp.end() && mpp[ransomNote[i]]!=0){
                mpp[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};