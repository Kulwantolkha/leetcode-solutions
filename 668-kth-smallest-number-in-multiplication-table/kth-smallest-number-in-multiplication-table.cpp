class Solution {
public:
    bool howSmaller(int m,int n, int num, int k){
        int c = 0;
        for(int i=1;i<=m;i++){
            c += min(n,num/i);
        }
        return c>=k;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 0;
        int high = m*n;
        while(low<high){
            int mid = low + (high-low)/2;
            if(howSmaller(m,n,mid,k)){
                high = mid;
            }
            else    low = mid+1;
        }
        return low;
    }
};