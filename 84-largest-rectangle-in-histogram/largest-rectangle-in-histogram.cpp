class Solution {
public:
    vector<int> funnse(vector<int>& h) {
        stack<int> st;
        vector<int> ans(h.size(), 0);
        for(int i = h.size()-1; i >= 0; i--) {
            while(!st.empty() && h[st.top()]>=h[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? h.size() : st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int> funpse(vector<int>& h) {
        vector<int> ans(h.size(), 0);
        stack<int> st;
        for(int i=0;i<h.size();i++) {
            while(!st.empty() && h[st.top()]>=h[i]) {
                st.pop();
            }
            ans[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return ans;
    }
    
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        vector<int> nse = funnse(h);
        vector<int> pse = funpse(h);
        int area = INT_MIN;
        for(int i = 0; i < h.size(); i++) {
            int width = nse[i] - pse[i] - 1;
            area = max(area, width * h[i]);
        }
        return area;
    }
};