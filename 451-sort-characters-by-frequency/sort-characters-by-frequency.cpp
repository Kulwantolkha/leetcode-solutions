class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(char str : s){
            mpp[str]++;
        }
        vector<pair<char,int>> freq;
        for(auto it:mpp){
            freq.push_back(it);
        }
        sort(freq.begin(),freq.end(),[](pair<char,int>&a, pair<char,int>&b){
            return a.second>b.second;
        });
        string r = "";
        for(auto it:freq){
            r += string(it.second,it.first);
        }
        return r;
    }
};

