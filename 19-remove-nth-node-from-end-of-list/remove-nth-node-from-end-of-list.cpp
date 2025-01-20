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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        if(n==1){
            ListNode* newtail = head;
            while(newtail->next->next!=NULL){
                newtail=newtail->next;
            }
            delete newtail->next;
            newtail->next = nullptr;
            return head;
        }
        int k = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            k++;
        }
        int m = k-n+1;
        int l = 1;
        ListNode* temp1 = head;
        if(n==k){
            temp1 = head->next;
            delete head;
            return temp1;
        }
        while(l!=(m-1)){
            temp1 = temp1->next;
            l++;
        }
        ListNode* tobedeleted = temp1->next;
        temp1->next = temp1->next->next;
        delete(tobedeleted);
        return head;
    }
};