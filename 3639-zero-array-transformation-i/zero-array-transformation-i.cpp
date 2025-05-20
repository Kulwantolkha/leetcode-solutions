class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        vector<int> diff(nums.size()+1,0);
        for(auto& query : q){
            int st = query[0];
            int fl = query[1];
            diff[st] -= 1;
            if(fl+1<nums.size())    diff[fl+1] += 1;
        }
        int combi = 0;
        for(int i=0;i<nums.size();i++){
            combi += diff[i];
            nums[i] += combi;
            if(nums[i]>0)    return false;
        }
        return true;
    }
};