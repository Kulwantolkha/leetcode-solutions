class Solution {
public:
    int romanToInt(std::string s) {
        int res = 0;
        
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        for (int i = 0; i < s.length() - 1; ++i) {
            if (roman[s[i]] < roman[s[i + 1]]) {
                res -= roman[s[i]];
            } else {
                res += roman[s[i]];
            }
        }
        res += roman[s[s.length() - 1]];
        
        return res;
    }
};