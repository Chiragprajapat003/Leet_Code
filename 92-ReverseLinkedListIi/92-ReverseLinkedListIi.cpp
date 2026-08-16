// Last updated: 8/16/2026, 9:23:03 PM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right){
            return head;
        }
            
       ListNode dummy(0);
       dummy.next = head;
       ListNode* prev = &dummy;
       

       for(int i = 1 ; i < left ; i++){
        prev = prev->next;
       }

       ListNode* curr = prev->next;
       ListNode* nxt = nullptr;
       ListNode* prev2 = nullptr;

       for(int i =0 ; i <= right-left ; i++){
        nxt = curr->next;
        curr->next = prev2;
        prev2 = curr;
        curr = nxt;
       }
       

       prev->next->next = curr;
       prev->next = prev2;
       
       

       return dummy.next;  
    }
};