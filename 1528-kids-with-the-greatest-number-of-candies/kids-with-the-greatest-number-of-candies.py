class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        maxi = max(candies)
        lst = list()
        for i in candies:
            if i+extraCandies >= maxi:   lst.append(True)
            else:   lst.append(False)
        return lst