class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        bool k=false;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            sum=nums[i];
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==target){
                    k=true;
                    v.push_back(i);
                    v.push_back(j);
                    break;
                }
                else{
                    sum=nums[i];
                }
            }
            if(k==true){
                break;
            }
        }
        return v;
    }
};