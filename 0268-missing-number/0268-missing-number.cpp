class Solution {
public:
    void sort(vector<int> &nums){
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
    }
    int missingNumber(vector<int>& nums) {
        sort(nums);
        int store = -1;
        vector<int> v;
        for(int i=0;i<=nums.size();i++){
            v.push_back(i);
        }
        for(int i=0;i<nums.size();i++){
            if(v[i]!=nums[i]){
                store=v[i];
                break;
            }
        }
        
        if(store!=-1)   return store;
        else    return nums.size();
    }
};