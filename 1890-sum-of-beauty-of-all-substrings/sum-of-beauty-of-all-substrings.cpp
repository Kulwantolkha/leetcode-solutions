// class Solution {
// public:
//     int diffOfChar(string str) {
//         unordered_map<char, int> my_map;
//         for (int i = 0; i < str.size(); i++) {
//             my_map[str[i]]++;
//         }
//         int first = INT_MAX;
//         int last = INT_MIN;
//         for (auto it : my_map) {
//             first = min(it.second, first);
//             last = max(it.second, last);
//         }
//         return last - first;
//     }

//     int beautySum(string s) {
//         int count = 0;
//         for (int i = 0; i < s.length(); i++) {
//             for (int j = i + 1; j <= s.length(); j++) {
//                 string str = s.substr(i, j - i);
//                 count += diffOfChar(str);
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            map<char,int> mpp;
            for(int j=i;j<s.length();j++){
                mpp[s[j]]++;
                int f = INT_MAX;
                int l = INT_MIN;
                for(auto it:mpp){
                    f = min(f,it.second);
                    l = max(l,it.second);
                }
                ans += l -f;
            }
        }
        return ans;
    }
};
