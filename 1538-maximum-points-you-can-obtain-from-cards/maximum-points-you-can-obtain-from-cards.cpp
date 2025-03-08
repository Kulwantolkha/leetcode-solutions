class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int cnt = 0;
        int newsum = sum;
        int last = cardPoints.size()-1;
        int n = k;
        while(cnt<k){
            newsum -= cardPoints[n-1];
            n -= 1;
            newsum += cardPoints[last];
            last -= 1;
            sum = max(sum,newsum);
            cnt++;
        }
        return sum;
    }
};