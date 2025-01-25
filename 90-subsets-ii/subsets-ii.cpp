// class Solution {
// public:
//     int generatingsubset(vector<int>& subset,vector<vector<int>>& ans,vector<int> nums,int index){
//         if(index==nums.size()){
//             ans.push_back(subset);
//             return 0;
//         }
//         // generatingsubset(subset.push_back(nums[index]),ans,nums,index+1);
//         // generatingsubset(subset,ans,nums,index+1);
//         subset.push_back(nums[index]);
//         generatingsubset(subset, ans, nums, index + 1);

//         // Backtrack and exclude the current element from the subset
//         subset.pop_back();
//         generatingsubset(subset, ans, nums, index + 1);
//         return 0;
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         vector<int> subset;
//         vector<vector<int>> ans;
//         generatingsubset(subset,ans,nums,0);
//         return ans;
//     }
// };

class Solution {
public:
    void generatingsubset(vector<int>& subset, vector<vector<int>>& ans, vector<int>& nums, int index) {
        // Base case: If we have processed all elements, store the current subset
        if (index == nums.size()) {
            ans.push_back(subset);
            return;
        }

        // Include the current element in the subset
        subset.push_back(nums[index]);
        generatingsubset(subset, ans, nums, index + 1);

        // Backtrack and exclude the current element from the subset
        subset.pop_back();
        generatingsubset(subset, ans, nums, index + 1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;

        // Sort the input array to handle duplicates
        sort(nums.begin(), nums.end());

        // Generate all subsets
        generatingsubset(subset, ans, nums, 0);

        // Remove duplicate subsets
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};
