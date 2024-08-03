class Solution:
    def hammingWeight(self, n: int) -> int:
        binary = format(n,'b')
        st = str(binary)
        sum=0
        for i in st:
            sum+=int(i)
        return sum