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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)  return NULL;
        if(head->next==NULL)    return head;
        vector<int> nums;
        ListNode* temp = head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }
        sort(nums.begin(),nums.end());
        ListNode* newlist = head;
        int i = 0;
        while(newlist!=NULL){
            newlist->val = nums[i];
            newlist = newlist->next;
            i++;
        }
        return head;
    }
};