class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        lst = ['a','e','i','o','u','A','E','I','O','U']
        i = 0
        j = len(s)-1
        s = list(s)
        def isVowel(ch):
            for i in lst:
                if ch == i:
                    return True
            return False

        while(i<=j):
            if(isVowel(s[i])):
                if(isVowel(s[j])):
                    s[i], s[j] = s[j], s[i]
                    i+=1
                    j-=1
                    continue
                else:
                    j-=1
                    continue

            if(isVowel(s[j])):
                if(isVowel(s[i])):
                    s[i], s[j] = s[j], s[i]
                    i+=1
                    j-=1
                    continue
                else:
                    i+=1
                    continue
            i+=1
            j-=1
        return ''.join(s)
        
