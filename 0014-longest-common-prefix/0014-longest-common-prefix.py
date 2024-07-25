class Solution:
    def longestCommonPrefix(self, strs: List[str]):
        strs.sort()
        count=0
        for i in  range(min(len(strs[0]),len(strs[-1]))):
            if(strs[0][0]==strs[-1][0]):
                if(strs[0][i]==strs[-1][i]):
                    count+=1
                else:
                    break
        if(count!=0):
                return strs[0][:count]
        else:
            return ""
#         result=""
#         s1=set(strs[0])
#         s2=set(strs[1])
#         s3=set(strs[2])
#         s4=s1,s2,s3
#         for i in range(len(strs)):
#             for j in s4[i]:
#                 if j in dict:
#                     dict[j]+=1
#                 else:
#                     dict[j]=1
#         for keys,values in dict.items():
#             if(values>2):
#                 result+=keys+""
                
#         return result
        