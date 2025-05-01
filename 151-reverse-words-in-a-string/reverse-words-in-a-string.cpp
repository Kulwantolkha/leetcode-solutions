class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string res = "";
        string str = "";
        stack<string> st;
        while(ss >> str){
            st.push(str);
        }
        while(!st.empty()){
            if(!res.empty())    res+=' ';
            res += st.top();
            st.pop();
        }
        return res;
    }
};