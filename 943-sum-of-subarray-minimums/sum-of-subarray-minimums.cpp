class Solution {
public:
    vector<int> fnse(vector<int> arr){
        stack<int> st;
        vector<int> ans(arr.size(), 0);
        for(int i = arr.size() - 1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.empty() ? arr.size() : st.top();  
            st.push(i);
        }
        return ans;
    }
    
    vector<int> fpse(vector<int> arr){
        stack<int> st;
        vector<int> ans(arr.size(), 0);
        for(int i = 0; i < arr.size(); i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top(); 
            st.push(i);
        }
        return ans;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int mod = (int)(1e9 + 7);
        int n = arr.size();
        vector<int> nse = fnse(arr);
        vector<int> pse = fpse(arr);
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            int j = nse[i] - i;
            int k = i - pse[i];
            int l = j * k; 
            long long curr = (long long)(l) * (arr[i]) % mod;
            ans = (ans + curr) % mod;  
        }
        return ans;
    }
};
