class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++){
            if(st.contains(nums[i]))    return true;
            st.insert(nums[i]);
        }
        return false;
    }
};