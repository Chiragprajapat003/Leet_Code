// Last updated: 8/25/2026, 4:59:48 PM
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
    ListNode* insertionSortList(ListNode* head) {

        ListNode* dummy = new ListNode(-1);

        ListNode* temp = head;

        while (temp != nullptr) {

            ListNode* nxt = temp->next;

           
            ListNode* check = dummy;

            while (check->next != nullptr &&
                   check->next->val < temp->val) {
                check = check->next;
            }

          
            temp->next = check->next;
            check->next = temp;

            temp = nxt;
        }

        return dummy->next;
    }
};