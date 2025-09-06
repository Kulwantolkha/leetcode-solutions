class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==1)  return 0;
        int totalSum = 0;
        for(int i:nums){
            totalSum += i;
        }
        cout<<totalSum<<endl;
        int lSum = 0;
        for(int i=0;i<nums.size();i++){
            if(i>0){
                lSum += nums[i-1];
            }
            totalSum -= nums[i];
            cout<<i<<"->"<<lSum<<"||"<<totalSum<<endl;
            if(lSum==totalSum){
                return i;
            }
        }
        return -1;
    }
};