/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = 0;
        int m = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1 != NULL){
            n++;
            temp1 = temp1 -> next;
        }
        while(temp2 != NULL){
            m++;
            temp2 = temp2 ->next;
        }
        int t = abs(n-m);
        if(n>m){
            while(t){
                headA = headA ->next;
                t--;
            }
        }
        else{
            while(t){
                headB = headB -> next;
                t--;
            }
        }
        while(headA != NULL && headB != NULL){
            if(headA == headB){
                return headA;
            }
            headA=headA->next;
            headB = headB->next;
        }
        return nullptr;
        
    }
};