class Solution(object):
    def twoOutOfThree(self, nums1, nums2, nums3):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :type nums3: List[int]
        :rtype: List[int]
        """
        count = {}
        set1 = set(nums1)
        set2 = set(nums2)
        set3 = set(nums3)
        for i in set1,set2,set3:
            for j in i:
                if j in count:
                    count[j]+=1
                else:
                    count[j] = 1
        lst=[]
        for keys,values in count.items():
            if values>1:
                lst.append(keys)
        return lst
        
        