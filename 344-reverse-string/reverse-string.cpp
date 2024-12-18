class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> st=s;
        s.clear();
        for(int i=st.size()-1;i>=0;i--){
            s.push_back(st[i]);
        }
    }
};