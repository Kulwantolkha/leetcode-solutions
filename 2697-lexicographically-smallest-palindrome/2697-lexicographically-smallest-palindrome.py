class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        for i in range(len(s)):
            if(s[i]==s[len(s)-i-1]):
                continue
            else:
                a=min(s[i],s[len(s)-i-1])
                b = max(s[i],s[len(s)-i-1])
                if(a==s[len(s)-i-1]):
                    s=s[:i]+b+s[i+1:]
                else:
                    s=s[:(len(s)-1-i)]+a+s[((len(s)-1-i)+1):]
        return s

        