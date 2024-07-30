class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        count=1
        for i in range(len(nums)):
            if(nums[i]==target):
                return (i)
                count=0
                break
            else:
                if(nums[i]>target):
                    count=0
                    return (i)
                    break
                
        if(count==1):
                return (len(nums))
        