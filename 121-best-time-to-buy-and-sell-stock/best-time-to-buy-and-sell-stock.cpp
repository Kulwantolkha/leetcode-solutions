class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0;
        int maxi=0;
        int min =prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min = prices[i];
            }
            diff = prices[i]-min;
            maxi = max(diff,maxi);
        }
        return maxi;
    }
};