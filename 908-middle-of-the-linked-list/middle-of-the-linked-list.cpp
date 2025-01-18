/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int k = 0;
        ListNode* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
            k++;
        }
        int j = 0;
        ListNode* newtemp = head;
        while(j<=k){
            if(j==ceil((double)k/2))    break;
            newtemp=newtemp->next;
            j++;
        }
        return newtemp;
    }
};