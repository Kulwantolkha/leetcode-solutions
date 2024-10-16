class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force approach
        /*
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
        */
        //more optimal approach
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]!=0 && j>-1){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};