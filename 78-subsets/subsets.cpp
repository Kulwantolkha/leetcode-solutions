class Solution {
public:
    int printsubst(vector<int>& nums,vector<vector<int>>& ans,vector<int>& subset,int index){
        if(index==nums.size()){
            ans.push_back(subset);
            return 0;
        }
        subset.push_back(nums[index]);
        printsubst(nums,ans,subset,index+1);
        subset.pop_back();
        printsubst(nums,ans,subset,index+1);
        return 0;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        printsubst(nums,ans,subset,0);
        return ans;
    }
};