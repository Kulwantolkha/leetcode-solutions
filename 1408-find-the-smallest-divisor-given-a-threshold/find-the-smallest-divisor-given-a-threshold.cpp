class Solution {
public:
    int summi(vector<int>& nums,int d){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += ceil(double(nums[i])/d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = INT_MAX;
        int maxi = *max_element(nums.begin(),nums.end());
        int low = 1;
        int high = maxi;
        while(low<=high){
            int mid = (low+high)/2;
            int sum = summi(nums,mid);
            if(sum>threshold){
                low = mid+1;
            }
            if(sum<=threshold){
                high = mid-1;
            }
        }
        return low;
    }
};