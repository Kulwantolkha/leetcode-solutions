class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)  return -1;
        if(nums.size()==1){
            if(nums[0]==target) return 0;
            else    return -1;
        }
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target)   return mid;   
            if(nums[mid]>=nums[low]){
                if(nums[low]<=target && nums[mid]>target)   high = mid-1;
                else    low = mid+1; 
            }
            else{
                if(nums[mid]<target && nums[high]>=target)   low = mid+1;
                else    high = mid-1;
            }
        }
        return -1;
    }
};