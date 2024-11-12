class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index = i-1;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
        }
        else{
            reverse(nums.begin()+index+1,nums.end());
            for(int i=index+1;i<nums.size();i++){
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
        }
    }
};
