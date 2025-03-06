class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int numofZeros = 0;
        int left = 0;
        int right = 0;
        int maxi = 0;
        while(right<nums.size()){
            if(nums[right]==0){
                numofZeros++;
            }
            while(numofZeros>k){
                if(nums[left]==0)   numofZeros--;   
                left++;
            }
            if(numofZeros<=k){
                maxi = max(maxi,right-left+1);
            }
            right++;
        }
        return maxi;
    }
};