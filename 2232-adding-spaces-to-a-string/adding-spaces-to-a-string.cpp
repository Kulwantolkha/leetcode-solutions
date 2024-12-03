class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        // int cnt = 0;
        // for(int i=0;i<spaces.size();i++){
        //     s.insert(spaces[i]+cnt,1,' ');
        //     cnt++;
        // }
        // return s;
        int n = s.length();
        int m = spaces.size();
        int r = n+m;
        string result;
        result.reserve(n+m);
        int spaceIndex = 0;
        int i = 0;
        while(i<n){
            if(spaceIndex<m && i == spaces[spaceIndex]){
                result.push_back(' ');
                spaceIndex++;
            }
            else{
                result.push_back(s[i]);
                i++;
            }
        }
        return result;
    }
};