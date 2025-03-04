class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        stack<int> st;
        for(int i=0;i<heights.size();i++){
            int nse = 0;
            int pse = 0;
            while(!st.empty() && heights[st.top()]>heights[i]){
                int element = heights[st.top()];
                st.pop();
                nse = i;
                pse = st.empty() ? -1 : st.top();
                int width = nse - pse - 1;
                ans = max(ans,width*element);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = heights.size();
            int element = heights[st.top()];
            st.pop();
            int pse = st.empty() ? -1 : st.top();
            ans = max(ans, (nse-pse-1)*element);
        }
        return ans;
    }
};