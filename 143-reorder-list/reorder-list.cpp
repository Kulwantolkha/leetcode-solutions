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
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next;
            if(fast->next!=NULL) fast = fast->next;
        }
        ListNode* second = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        ListNode* curr = second;
        while(curr) {
            ListNode* nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
        }
        second = prev;
        ListNode* first = head;
        while(second) {
            ListNode* t1 = first->next;
            ListNode* t2 = second->next;
            
            first->next = second;
            second->next = t1;

            first = t1;
            second = t2;
        }
    }
};