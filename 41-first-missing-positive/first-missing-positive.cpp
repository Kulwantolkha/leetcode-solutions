class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        // int n=0;
        int m=1;
        bool b = false;
        sort(nums.begin(),nums.end());
        while(i<nums.size() && b==false){
            while(i<nums.size() && nums[i]<=0)  i++;
            if(i>=nums.size())   return 1;
            if(i>0 && nums[i]==nums[i-1])   i++;
            else if(nums[i]!=m){
                b=true;
                return m;
            }
            else{
                i++;
                m++;
            }
        }
        return nums[nums.size()-1]+1;
    }
};