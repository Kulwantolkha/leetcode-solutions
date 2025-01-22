const int mod = 1e9 + 7;
class Solution {
public:
    long long powsol(long long n,long long eo,int mod){
        if(eo==0)   return 1;
        long long half = powsol(n,eo/2,mod);
        half = (half*half)%mod;
        if(eo%2!=0){
            half = (n*half)%mod;
        }
        return half;
    }
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = (n+1)/2;
        long long evenresult = powsol(5,even,mod);
        long long oddresult = powsol(4,odd,mod);
        return (evenresult * oddresult) % mod;
    }
};