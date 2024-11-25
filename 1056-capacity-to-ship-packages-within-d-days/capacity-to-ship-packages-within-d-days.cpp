class Solution {
public:
    int totalWeight(vector<int>& nums){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
    int NoOfDays(vector<int>& nums, int cap){
        int days = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>cap){
                days+=1;
                sum = nums[i];
            }
            else{
                sum+=nums[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = totalWeight(weights);
        while(low<=high){
            int mid = (low+high)/2;
            int d = NoOfDays(weights,mid);
            if(d<=days){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};