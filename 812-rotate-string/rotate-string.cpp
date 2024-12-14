class Solution {
public:
    bool rotateString(string s, string goal) {
        string s1=s;
        for(int i=0;i<s.length();i++){
            if(s1==goal)    return true;
            char first = s1[0];
            s1 = s1.erase(0,1);
            s1.push_back(first);
        }
        return false;
    }
};