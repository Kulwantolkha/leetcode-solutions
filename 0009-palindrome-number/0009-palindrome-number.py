class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        rev = 0
        a=x
        if(x>0):
            while(x>0):
                rem = x%10
                rev = rev*10+rem
                x//=10
            if(rev==a):
                return True
        elif(x==0):
            return True
        else:
            return False
        