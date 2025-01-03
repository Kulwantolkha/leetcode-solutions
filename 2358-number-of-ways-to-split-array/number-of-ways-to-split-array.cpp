class Solution {
public:
    static int waysToSplitArray(vector<int>& nums) {
        int cnt = 0;
        long long totalsum = accumulate(nums.begin(),nums.end(),0LL);
        long long sum1 = 0;
        for(int i=1;i<nums.size();i++){
            sum1+=nums[i-1];
            long long sum2 = totalsum - sum1;
            cout<<sum1<<"   "<<sum2<<endl;
            if(sum1>=sum2)   cnt++;

        }
        return cnt;
    }
};