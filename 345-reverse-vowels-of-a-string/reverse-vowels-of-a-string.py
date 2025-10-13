class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        st = set("aeiouAEIOU")
        i = 0
        j = len(s)-1
        s = list(s)
        while(i<=j):
            if s[i] not in st:
                i+=1
            elif s[j] not in st:
                j-=1
            else:
                s[i], s[j] = s[j],s[i]
                i+=1
                j-=1

        return ''.join(s)
        
