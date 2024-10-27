class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     int n = nums.size()/2;
    //     map<int,int> mpp;
    //     for(int i=0;i<nums.size();i++){
    //         mpp[nums[i]]++;
    //     }
    //     int num;
    //     for(auto it:mpp){
    //         if(it.second>n){
    //             return it.first;
    //         }
    //     }
    //     return -1;
    // }

    //Moore Voting Algorithm
    int majorityElement(vector<int>& nums){
        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
          if(cnt==0){
            cnt=1;
            el=nums[i];
          }  
          else if(nums[i]==el){
            cnt++;
          }
          else{
            cnt--;
          }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                cnt1++;
            }
        }
        if(cnt1>nums.size()/2){
            return el;
        }
        return -1;
    }
};