class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mpp;
        for(int i : nums) {
            if(mpp.find(i)!=mpp.end())  return true;
            mpp[i]++;
        }
        return false;
    }
}; 