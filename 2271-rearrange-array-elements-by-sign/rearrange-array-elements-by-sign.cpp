class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
            else{
                negative.push_back(nums[i]);
            }
        }
        vector<int> nums1;
        for(int i=0;i<nums.size()/2;i++){
            nums1.push_back(positive[i]);
            nums1.push_back(negative[i]);
        }
        return nums1;
    }
};