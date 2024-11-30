class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;       
        int start = 0;       
        int balance = 0;     

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }

            if (balance == 0) {
                result += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
        }
        return result;
    }
};