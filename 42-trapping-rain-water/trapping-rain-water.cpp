class Solution {
public:
    int trap(vector<int>& arr) {
        vector<int> p(arr.size(),0);
        vector<int> s(arr.size(),0);
        p[0] = arr[0];
        s[arr.size()-1] = arr[arr.size()-1];
        for(int i=1;i<arr.size();i++){
            p[i] = max(p[i-1],arr[i]);
        }
        for(int i = arr.size()-2;i>=0;i--){
            s[i] = max(s[i+1],arr[i]);
        }
        int ans = 0;
        for(int i=0;i<arr.size();i++){
            ans += min(p[i],s[i])-arr[i];
        }
        return ans;
    }
};