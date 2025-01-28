class Solution {
public:
    void f(vector<vector<int>>& ans,vector<int>& temp,vector<int>& c, int target, int idx){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<c.size();i++){
            if(i>idx && c[i]==c[i-1])   continue;
            if(c[i]>target) break;
            temp.push_back(c[i]);
            f(ans,temp,c,target-c[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        f(ans,temp,candidates,target,0);
        return ans;
    }
};