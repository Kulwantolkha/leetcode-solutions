class Solution {
public:
    vector<int> findnse(vector<int> nums){
        vector<int> ans(nums.size(),0);
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? nums.size() : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findpse(vector<int> nums){
        vector<int> ans(nums.size(),0);
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()] > nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    long long sumofSmallest(vector<int> nse, vector<int> pse, vector<int> nums){
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            long long j = nse[i]-i;
            long long k = i-pse[i];
            long long num = j*k;
            sum = sum + (num*nums[i]);  
        }
        return sum;
    }

    vector<int> findnge(vector<int> nums){
        vector<int> ans(nums.size(),0);
        stack<int> st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()] <= nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? nums.size() : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> findpge(vector<int> nums){
        vector<int> ans(nums.size(),0);
        stack<int> st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }

    long long sumOfLargest(vector<int> nge, vector<int> pge, vector<int> nums){
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            long long j = nge[i] - i;
            long long k = i - pge[i];
            long long l = j*k;
            sum = sum + l*nums[i];
        }
        return sum;
    }

    long long subArrayRanges(vector<int>& nums) {
        vector<int> nse = findnse(nums);
        vector<int> pse = findpse(nums);
        vector<int> nge = findnge(nums);
        vector<int> pge = findpge(nums);
        long long sumOfSmallest = sumofSmallest(nse,pse,nums);
        long long sumofLargest = sumOfLargest(nge,pge,nums);
        return abs(sumOfSmallest - sumofLargest);
    }
};