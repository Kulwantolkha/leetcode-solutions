class Solution {
public:
    int reverse(int x) {
        int num=0;
        int rem =0;
        bool flag =false;
        if(x<0){
            flag=true;
            x=abs(x);
        }
        while(x>0){
            rem = x%10;
            if (num>(INT_MAX - rem)/10){
                return 0;
            }
            num = num*10+rem;
            x=x/10;
        }
        if(flag==true){
            num=-num;
        }
        return num;
    }
};