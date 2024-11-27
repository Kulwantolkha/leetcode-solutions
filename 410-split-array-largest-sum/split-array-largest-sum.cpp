class Solution {
public:
    int sumArr(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        return sum;
    }
    int returnValueK(vector<int>& nums, int s) {
        int sum = 0;
        int vK = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum > s) {
                vK++;
                sum = nums[i];
            }
        }
        return vK;
    }
    int splitArray(vector<int>& nums, int k) {
        if(k>=nums.size())  return *max_element(nums.begin(),nums.end());
        int low = *max_element(nums.begin(),nums.end());
        int high = 1e9;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (returnValueK(nums, mid) > k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low;
    }
};