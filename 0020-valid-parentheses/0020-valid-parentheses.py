class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        dict = {"}":"{","]":"[",")":"("}
        sample = []
        for i in s:
            if i in dict:
                top_element = sample.pop() if sample else "#"
                if(dict[i]!=top_element):
                    return False
            else:
                sample.append(i)
        return not sample