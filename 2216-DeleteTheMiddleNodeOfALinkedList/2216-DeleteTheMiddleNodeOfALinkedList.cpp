// Last updated: 8/16/2026, 9:13:52 PM
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
    ListNode* deleteMiddle(ListNode* head) {

        if (head == nullptr)
            return nullptr;

        if (head->next == nullptr) {
            
            return nullptr;
        }

        int l = 0;
        ListNode* temp = head;

        // Find length
        while (temp != nullptr) {
            l++;
            temp = temp->next;
        }

        int mid = l / 2;

        // Move to node before middle
        ListNode* temp2 = head;

        while (mid - 1 > 0) {
            temp2 = temp2->next;
            mid--;
        }

        // Delete middle
        ListNode* del = temp2->next;
        temp2->next = del->next;

        

        return head;
    }
};