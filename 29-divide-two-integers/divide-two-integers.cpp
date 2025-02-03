class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        long long q = 0;
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        while (absDividend >= absDivisor) {
            int cnt = 0;
            while ((absDivisor << (cnt + 1)) <= absDividend) {
                cnt++;
            }
            absDividend -= (absDivisor << cnt);
            q += (1 << cnt);
        }
        return sign * q;
    }
};
