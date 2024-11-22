class Solution {
public:
    int firstOccurance(vector<int> &nums, int target){
        int low =0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                cout<<mid;
                if(mid==0 || nums[mid]!=nums[mid-1])    return mid;
                else    high = mid-1;
            }
        }
        return -1;
    }
    int lastOccurance(vector<int>& nums, int target){
        int low =0 ;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                high = mid-1;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                if(mid==nums.size()-1 || nums[mid]!=nums[mid+1])    return mid;
                else    low = mid+1;
            }
        }
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = firstOccurance(nums,target);
        int last = lastOccurance(nums,target);
        ans.push_back(first);
        ans.push_back(last);    
        return ans;
    }
};