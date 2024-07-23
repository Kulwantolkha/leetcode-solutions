class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        
        if(x<0):
            rev = int(str(x)[1:][::-1]) * -1
        else:
            rev = int(str(x)[::-1])
        if (rev>2**31 or rev<-((2**31)-1)):
            return 0
        return rev