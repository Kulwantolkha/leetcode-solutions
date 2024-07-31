class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        s=""
        for i in digits:
            s+=str(i)
        num=int(s)
        num+=1
        lst=[]
        st=str(num)
        # for i in st:
            # lst.append(int(i))
        # return lst
        return [int(i) for i in st]