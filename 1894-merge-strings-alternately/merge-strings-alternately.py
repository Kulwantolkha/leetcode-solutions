class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        ans = ""
        a=0
        b=0
        x = len(word1)
        y = len(word2)
        while a<y and b<x:
            ans+=word1[a]
            ans+=word2[b]
            a+=1
            b+=1
        if a<x: ans+=word1[a:]
        if b<y: ans+=word2[b:]
        return ans
        
