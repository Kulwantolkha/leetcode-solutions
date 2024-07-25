class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        lst = []
        lst = s.split()
        return (len(lst[len(lst)-1]))
        
        
            
        