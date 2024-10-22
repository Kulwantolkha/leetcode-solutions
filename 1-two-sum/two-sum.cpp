class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int sum=0;
        // bool k=false;
        // vector<int> v;
        // for(int i=0;i<nums.size();i++){
        //     sum=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==target){
        //             k=true;
        //             v.push_back(i);
        //             v.push_back(j);
        //             break;
        //         }
        //         else{
        //             sum=nums[i];
        //         }
        //     }
        //     if(k==true){
        //         break;
        //     }
        // }
        // return v;

        //Better Solution
        map<int,int> mpp;
        int sum=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            int needed_number = target-nums[i];
            if(mpp.find(needed_number)!=mpp.end()){
                v.push_back(mpp[needed_number]);
                v.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return v;
    }
};