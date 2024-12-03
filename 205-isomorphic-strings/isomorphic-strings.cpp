class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        map<char, char> mapS, mapT;

        for (int i = 0; i < s.length(); i++) {
            if (mapS.find(s[i]) != mapS.end()) {
                if (mapS[s[i]] != t[i]) {
                    return false;
                }
            } else {
                mapS[s[i]] = t[i];
            }

            if (mapT.find(t[i]) != mapT.end()) {
                if (mapT[t[i]] != s[i]) {
                    return false;
                }
            } else {
                mapT[t[i]] = s[i];
            }
        }

        return true;
    }
};