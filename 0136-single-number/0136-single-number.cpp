class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> mp;
        int cnt=0;
        int value = 1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            }
            mp.emplace(nums[i],cnt);
            cnt=0;
        }
        for(auto it:mp){
            if(it.second==1){
                value = it.first;
            }
        }
        return value;
    }
};