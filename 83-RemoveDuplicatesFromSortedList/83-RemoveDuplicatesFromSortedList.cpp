// Last updated: 8/16/2026, 9:23:14 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
        while( temp != nullptr && temp->next != nullptr ){
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;
            }else{
                 temp = temp->next;
            }
        }
        return head;
    }
};