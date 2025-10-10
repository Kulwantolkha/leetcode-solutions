class Solution(object):
    def isPalindrome(self, s, left, right):
        while(left<right):
            if(s[left]!=s[right]):
                return False
            left+=1
            right-=1
        return True

    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        left = 0
        right = len(s)-1
        while left < right:
            if(s[left]!=s[right]):
                return self.isPalindrome(s,left+1,right) or self.isPalindrome(s,left,right-1)
            left+=1
            right-=1
        return True
        