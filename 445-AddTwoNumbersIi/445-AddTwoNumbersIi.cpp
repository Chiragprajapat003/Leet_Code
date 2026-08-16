// Last updated: 8/16/2026, 9:19:44 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        ListNode* prev1 = nullptr;
        ListNode* nxt1 = nullptr;
        while(curr1 != NULL){
           nxt1 = curr1->next;
           curr1->next = prev1 ;
           prev1 = curr1;
           curr1 = nxt1;
        }

        ListNode* prev2 = nullptr;
        ListNode* nxt2 = nullptr;
        while(curr2 != NULL){
           nxt2 = curr2->next;
           curr2->next = prev2 ;
           prev2 = curr2;
           curr2 = nxt2;
        }

        curr1 = prev1;
        curr2 = prev2;
        int count = 0;
        int sum ;
       ListNode dummy(0);
        ListNode* temp= &dummy;

        while(curr2 != nullptr || curr1 != nullptr || count){
            
             sum = count;
            if(curr1 != NULL){
                 sum += curr1->val;
                 curr1 = curr1->next;
            }
           
           if(curr2 != NULL){
            sum += curr2->val;
            curr2 = curr2->next;
           }


            temp->next  = new ListNode(sum%10);
            
            temp = temp->next;
            count = sum / 10;
        }
        

        ListNode* curr = &dummy;
        curr = curr->next;
        ListNode* prev = NULL;
        ListNode* nxt = NULL;

        while(curr != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        
        return prev;

    }
};