class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int size = nums.size()/3;
        for(int num:nums){
            mpp[num]++;
        }
        vector<int> result;
        for(auto it : mpp){
            if(it.second>size){
                result.push_back(it.first);
            }
        }
        return result;
    }
};