class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        st.insert(nums.begin(),nums.end());
        if(st.size()!=nums.size())  return true;
        return false;
    }
}; 