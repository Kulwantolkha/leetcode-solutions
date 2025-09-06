class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1)  return 0;
        int totalSum = 0;
        for(int i:nums){
            totalSum += i;
        }
        int lSum = 0;
        for(int i=0;i<nums.size();i++){
            totalSum -= nums[i];
            if(lSum==totalSum){
                return i;
            }
            lSum += nums[i];
        }
        return -1;
    }
};