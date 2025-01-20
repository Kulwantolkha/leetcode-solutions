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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> mpp;
        ListNode* temp = head;
        int k = 0;
        while(temp!=NULL){
            if(mpp.find(temp)==mpp.end()){
                mpp[temp] = k;
            }
            else{
                return temp;
            }
            temp=temp->next;
            k++;
        }
        return NULL;
    }
};