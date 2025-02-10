class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[i]>st.top()){
                mpp[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int n:nums1){
            if(mpp.count(n)){
                ans.push_back(mpp[n]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};