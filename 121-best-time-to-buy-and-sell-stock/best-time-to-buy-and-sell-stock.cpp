class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j = i+1;
        int ans=0; 
        while(j!=prices.size()){
            if(prices[j]>=prices[i]){
                ans = max(ans,prices[j]-prices[i]);
                j++;
            }
            else if(prices[j]<prices[i]){
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        return ans;
    }
};