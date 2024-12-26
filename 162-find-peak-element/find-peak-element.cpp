class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        while (start <= end) {
            int middle = start + (end - start) / 2;
            if ((middle == 0 || nums[middle] > nums[middle - 1]) &&
                (middle == nums.size() - 1 || nums[middle] > nums[middle + 1])) {
                return middle;
            }
            if (middle < nums.size() - 1 && nums[middle] < nums[middle + 1]) {
                start = middle + 1;
            } else {
                end = middle - 1;
            }
        }
        return -1;
    }
};