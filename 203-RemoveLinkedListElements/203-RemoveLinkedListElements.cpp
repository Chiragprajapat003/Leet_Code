// Last updated: 8/16/2026, 9:21:29 PM
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        
        ListNode* curr = head;

        while(curr){
            if(curr->val == val){
                prev->next = curr->next;
                // curr->next = NULL;
            }else{
                prev = curr;
            }
            curr = curr->next;
        }
    return dummy.next;
    }
};