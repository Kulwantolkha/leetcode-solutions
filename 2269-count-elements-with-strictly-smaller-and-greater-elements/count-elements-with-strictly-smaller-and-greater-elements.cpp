class Solution {
public:
    int countElements(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            bool smaller = false;
            bool bigger = false;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    bigger = true;
                }
                if(nums[j]<nums[i]){
                    smaller = true;
                }
            }
            if(smaller == true && bigger == true){
                cnt++;
            }
        }
        return cnt;
    }
};