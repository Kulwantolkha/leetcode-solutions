class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int idx = -1;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            while(nums[i]!=0){
                int rem = nums[i]%10;
                sum += rem;
                nums[i] /= 10;
            }
            if(sum==i)  return i;
        }
        return idx;
    }
};