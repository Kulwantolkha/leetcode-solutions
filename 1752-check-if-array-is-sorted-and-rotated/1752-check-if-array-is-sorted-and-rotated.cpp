class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                int temp = nums[nums.size()-1];
                for(int j=nums.size()-1;j>=1;j--){
                    nums[j]=nums[j-1];
                }
                nums[0] = temp;                
            }
        }
        int c = 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                c=1;
            }
        }
        if(c==0){
            return true;
        }
        else{
            return false;
        }
    }
};