class Solution {
public:
    vector<int> leftnei(vector<int>& ratings){
        vector<int> ans(ratings.size(),0);
        ans[0] = 1;
        for(int i=1;i<ratings.size();i++){
            if(ratings[i-1]<ratings[i]){
                ans[i] = ans[i-1]+1;
            }
            else{
                ans[i] = 1;
            }
        }
        return ans;
    }
    vector<int> rightnei(vector<int>& ratings){
        int n = ratings.size();
        vector<int> ans(n,0);
        ans[n-1] = 1;
        for(int i = n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                ans[i] = ans[i+1]+1;
            }
            else{
                ans[i] = 1;
            }
        }
        return ans;
    }
    int candy(vector<int>& ratings) {
        if(ratings.size()==0)   return 0;
        vector<int> st(ratings.size(),0);
        int ans = 0;
        vector<int> st1 = leftnei(ratings);
        vector<int> st2 = rightnei(ratings);
        for(int i=0;i<ratings.size();i++){
            if(st1[i]>st2[i])   st[i] = st1[i];
            else    st[i] = st2[i];
        }
        ans = accumulate(st.begin(),st.end(),0);
        return ans;
    }
};