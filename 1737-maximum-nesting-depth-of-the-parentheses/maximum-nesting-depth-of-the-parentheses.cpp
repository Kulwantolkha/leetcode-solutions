class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int c1 =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt+=1;
            }
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
                continue;
            }
            if(s[i]==')'){
                cnt-=1;
            }
            c1 = max(cnt,c1);
        }
        return c1;
    }
};