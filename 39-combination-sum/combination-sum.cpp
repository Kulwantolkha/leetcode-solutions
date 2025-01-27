class Solution {
public:
    void combitorialSum(vector<int>& candidates,vector<int>& subset,vector<vector<int>>& ans, int target,int i){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(subset);
            }
            return;
        }
        if(candidates[i]<=target){
            subset.push_back(candidates[i]);
            combitorialSum(candidates,subset,ans,target-candidates[i],i);
            subset.pop_back();
        }
        combitorialSum(candidates,subset,ans,target,i+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> subset;
        combitorialSum(candidates,subset,ans,target,0);
        return ans;
    }
};