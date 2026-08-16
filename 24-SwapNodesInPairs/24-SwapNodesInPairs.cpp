// Last updated: 8/16/2026, 9:24:03 PM
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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }


        ListNode dummy(0);
        ListNode* prev = &dummy;

        prev->next = head;
        ListNode* curr = head;

        ListNode* nxt = nullptr;
        
        while(curr != NULL && curr->next!=NULL){
              nxt  = curr->next;
              curr->next = nxt->next;
              nxt->next = curr;
              
              prev->next = nxt;
              prev = nxt;
              prev = prev->next;
              curr = curr->next;
              

        }
        return dummy.next;
    }
};