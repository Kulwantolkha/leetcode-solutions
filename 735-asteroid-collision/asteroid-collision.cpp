class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            int curr = asteroids[i];
            if(st.empty() || curr>0 || st.top()<0){
                st.push(curr);
            }
            else{
                while(!st.empty() && curr<0 && st.top()>0 && st.top()<abs(curr)){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(curr)){
                    st.pop();
                }
                else if(st.empty() || st.top()<0){
                    st.push(curr);
                }
            }
        }
            vector<int> ans;
            while(!st.empty()){
                ans.push_back(st.top());
                st.pop();
            }
            reverse(ans.begin(),ans.end());
            return ans;
    }
};