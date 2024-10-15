class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // set<int> st;
        // for(auto it=nums.begin();it!=nums.end();it++){
        //     st.insert(*it);
        // }
        // nums.clear();
        // for(auto it:st){
        //     nums.push_back(it);
        // }
        // return st.size(); 
//         int i=0;
//         for(auto j=nums.begin()+1;j!=nums.end();j++){
//             if(*j!=nums[i]){
//                 nums[i+1]=*j;
//                 i++;
//             }
//         }
//         return nums.size();
        vector<int> v;
        int j=0;
        v.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(v[j]!=nums[i]){
                v.push_back(nums[i]);
                j++;
            }
        }
        // nums.clear();
        nums = v;
        return nums.size();
    }
};