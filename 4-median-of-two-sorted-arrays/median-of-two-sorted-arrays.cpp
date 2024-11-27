class Solution {
public:
    vector<int> mergeSorted(vector<int> nums, vector<int> arr){
    int n = nums.size();
    int m = arr.size();
    int i=0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        if(nums[i]<=arr[j]){
            ans.push_back(nums[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]);
            j++;
        }
        // if(nums[i]>arr[j]){
        //     ans.push_back(arr[j]);
        //     j++;
        // }
    }
    while(i<n){
        ans.push_back(nums[i]);
        i++;
    }
    while(j<m){
        ans.push_back(arr[j]);
        j++;
    }
    return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = mergeSorted(nums1,nums2);
        int len = ans.size();
        if(len%2!=0){
            int mid = len/2;
            return double(ans[mid]);
        }
        else{
            int mid = len/2;
            // double a = (ans[mid]+ans[mid+1])/2.0;
            return double(ans[mid]+ans[mid-1])/2.0;
        }
        return 1.000;
    }
};