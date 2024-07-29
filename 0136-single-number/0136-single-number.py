class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict = {}
        count = 0
        for i in nums:
            if i in dict:
                dict[i]+=1
            else:
                dict[i]=1
        for keys,values in dict.items():
            if(values==1):
                return keys