class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int it = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==it){
                it++;
                continue;
            }
            else    return it;
        }
        return it;
    }
};