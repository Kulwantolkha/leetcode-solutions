class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                v.push_back(nums[i]);
            }
        }
        for(int i=v.size();i<nums.size();i++){
            v.push_back(0);
        }
        nums=v;
    }
};