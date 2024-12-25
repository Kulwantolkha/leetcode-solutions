class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxi= max(nums[i],maxi);
            mini= min(nums[i],mini);
        }
        int ans1 =  (maxi-k)-(mini+k);
        if(ans1<0)  return 0;
        return ans1;
    }
};