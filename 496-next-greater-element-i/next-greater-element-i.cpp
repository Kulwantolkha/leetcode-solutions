class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int n = nums1[i];
            for(int j=0;j<nums2.size();j++){
                if(n==nums2[j]){
                    bool flag = false;
                    for(int k=j+1;k<nums2.size();k++){
                        if(n<nums2[k]){
                            flag = true;
                            ans.push_back(nums2[k]);
                            break;
                        }
                    }
                    if(flag==false){
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
};