// Last updated: 8/18/2026, 10:28:56 PM
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
    ListNode* oddEvenList(ListNode* head) {

    ListNode odd(0);
    ListNode even(0);
    ListNode* prev1 = &odd;
    ListNode* prev2 = &even;
    int count = 1;
    ListNode* temp = head;
    while(temp != nullptr){
        if(count%2 != 0){
         prev1->next = temp;
         prev1 =temp;
         temp = temp->next ;
         count++;
        }else{
        prev2->next = temp;
        prev2 = temp;
        count++;
        temp = temp->next;
        }


    }
        // ListNode* curr = odd.next;
        // while(curr->next != nullptr){
        //     curr = curr->next;
        // }
        prev1->next = even.next;
        prev2->next = nullptr;
        // even.next = nullptr;
    
    return odd.next;
    
    }
};