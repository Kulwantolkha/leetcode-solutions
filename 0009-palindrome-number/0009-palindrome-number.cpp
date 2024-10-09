class Solution {
public:
    bool isPalindrome(int x) {
        int num=0;
        int original = x;
        if(x>0){
            while(x>0){
                int r = x%10;
                if(num>(INT_MAX-r)/10){
                    return 0;
                }
                num=num*10+r;
                x=x/10;
            }
        }
        if(num==original){
            return true;
        }
        else{
            return false;
        }
}
};