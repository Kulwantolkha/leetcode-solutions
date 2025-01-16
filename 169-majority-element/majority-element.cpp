class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int cnt = 1;
        int size = nums.size();
        int i = 1;
        while(i<size){
            if(cnt==0){
                ele = nums[i];
            }
            if(nums[i]==ele){
                cnt++;
            }
            else if(nums[i]!=ele){
                cnt--;
            }
            i++;
        }
        return ele;
    }
};