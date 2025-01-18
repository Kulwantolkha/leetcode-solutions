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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)  return NULL;
        if(head->next==NULL)    return head;
        stack<int> st;
        ListNode* temp = head;
        while(temp!=NULL){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* temp1 = head;
        while(temp1!=NULL){
            temp1->val = st.top();
            st.pop();
            temp1=temp1->next;
        }
        return head;
    }
};