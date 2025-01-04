class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int result = 0;
        int length = s.length();
        
        unordered_map<char, pair<int, int>> charPositions;
        
        for (int i = 0; i < length; i++) {
            if (charPositions.find(s[i]) == charPositions.end()) {
                charPositions[s[i]].first = i;
            }
            charPositions[s[i]].second = i;
        }
        
        for (const auto& [character, positions] : charPositions) {
            int start = positions.first;
            int end = positions.second;
            
            if (end - start <= 1) continue;  
            
            unordered_set<char> seenCharacters;
            for (int i = start + 1; i < end; i++) {
                seenCharacters.insert(s[i]);
            }
            
            result += seenCharacters.size();
        }
        
        return result;
    }
};
