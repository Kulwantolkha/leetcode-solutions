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
    bool isPalindrome(ListNode* head) {
        vector<int> nums;
        ListNode* temp = head;
        while(temp!=nullptr){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int low = 0; 
        int high =nums.size()-1;
        while(low<=high){
            if(nums[low]!=nums[high])   return false;
            low++,high--;
        }
        return true;
    }
};