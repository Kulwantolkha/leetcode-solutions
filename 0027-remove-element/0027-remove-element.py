class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        count=0
        for i in range(len(nums)):
            # if nums[i]!=val:
                # nums[count]=nums[i]
                # count+=1
            if nums[i]==val:
                nums.remove(nums[i])
                nums.insert(i,None)
            else:
                count+=1
        for i in range(len(nums)):
            if nums[i]==None:
                nums.remove(nums[i])
                nums.append(None)
        return count

        