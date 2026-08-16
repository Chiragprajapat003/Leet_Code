// Last updated: 8/16/2026, 9:24:01 PM
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        
        // Check if at least k nodes exist
        for(int i = 0; i < k; i++){
            if(temp == NULL) return head;
            temp = temp->next;
        }

        // Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* nextNode = NULL;

        for(int i = 0; i < k; i++){
            nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        // Connect with remaining list
        head->next = reverseKGroup(curr, k);

        return prev;
    }
};