# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def mergeTwoLists(self, list1, list2):
        """
        :type list1: Optional[ListNode]
        :type list2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if not list1:
            return list2
        if not list2:
            return list1

        dummyNode = list1
        if (list1.val > list2.val):
            dummyNode = list2
            list2 = list2.next
        else:
            list1 = list1.next
        curr = dummyNode

        while list1 and list2:
            if(list1.val > list2.val):
                dummyNode.next = list2
                list2 = list2.next
            else:
                dummyNode.next = list1
                list1 = list1.next
            
            dummyNode = dummyNode.next
        
        if list1:
            dummyNode.next = list1
        if list2:
            dummyNode.next = list2
        return curr
        