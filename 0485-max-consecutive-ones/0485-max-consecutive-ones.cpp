class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 1;
        vector<int> v;
        int max=0;
        if(nums.size()==1){
            if(nums[0]==1){
                return 1;
            }
            else{
                return 0;
            }
        }
        int flag = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1 || nums[i-1]==1){
                flag=1;
            }
            if(nums[i]==1 && nums[i-1]==1){
                count++;
                v.push_back(count);
            }
            else{
                v.push_back(count);
                count=1;
            }
        }
        if(flag==0){
            return 0;
        }
        max = *max_element(v.begin(),v.end());
        return max;
    }
};