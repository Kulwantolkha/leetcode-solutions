class Solution {
public:
    int func(vector<int>& nums, int k){
        if(k<0) return 0;
        int cnt = 0;
        int sum = 0;
        int l = 0;
        int r = 0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> oddeven(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                oddeven[i]=1;
            }
            else{
                oddeven[i]=0;
            }
        }
        int s1 = func(oddeven,k);
        int s2 = func(oddeven,k-1);
        return (s1-s2);
    }
};