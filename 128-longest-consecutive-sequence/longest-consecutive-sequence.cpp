class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())    return 0;
        sort(nums.begin(),nums.end());
        int last_smallest = nums[0];
        int longest = 1;
        int count = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==last_smallest+1){
                count++;
                last_smallest = nums[i];
                longest = max(longest,count);
            }
            else if(nums[i]==last_smallest){
                continue;
            }
            else{
                last_smallest=nums[i];
                count=1;
            }
        }
        return longest;
    }
};