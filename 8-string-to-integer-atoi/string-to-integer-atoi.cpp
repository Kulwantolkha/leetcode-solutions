// class Solution {
// public:
//     int myAtoi(string s) {
//         int num = 0;
//         string ans = "";
//         bool tr = false;
//         bool zc = false;
//         // if(s=="0-1")    return 0;
//         for(int i=0;i<s.length();i++){
//             if(tr==false && s[i]=='0'){
//                 zc=true;
//             }
//             else if((tr==false && s[i]==' ') || (tr==false && s[i]=='0')){
//                 continue;
//             }

//             else if((tr==false && s[i]=='-')){
//                 ans +='-';
//             }
//             else if((tr==true && s[i]=='-')){
//                 break;
//             }
//             else if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9'){
//                 ans += s[i];
//                 tr = true;
//             }
//             else{
//                 break;
//             }
//         }
//         if(ans==""){
//             return 0;
//         }
//         if(zc==true)   return 0;
//         num = stoi(ans);
//         return num;
//     }
// };
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, num = 0, sign = 1;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        while (i < s.length() && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            num = num * 10 + digit;
            i++;
        }
        
        return num * sign;
    }
};
