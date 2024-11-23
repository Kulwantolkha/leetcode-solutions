class Solution {
public:
    long long timeRequired(vector<int>& piles, int h, int t) {
        long long time = 0;
        for (int i = 0; i < piles.size(); i++) {
            time += (piles[i] + t - 1) / t;  // Ceiling of (piles[i] / t)
        }
        return time;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = 0;
        int ans = 1;
        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }
        
        while (low <= high) {
            int mid = (low + high) / 2;
            long long time = timeRequired(piles, h, mid);
            if (time > h) {
                low = mid + 1;
            } 
            else {
                ans = mid;
                high = mid - 1;
            }
        }
        
        return ans;
    }
};
