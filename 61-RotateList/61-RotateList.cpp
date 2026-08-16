// Last updated: 8/16/2026, 9:23:31 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == nullptr ||  k == 0){
            return head;
        }
        if(head->next == nullptr){
            return head;
        }
        
        int l = 0;
        ListNode* count = head;
        while(count != nullptr){
            count = count->next;
            l++;
        }
        k = k%l;
        for(int i = 1 ; i <= k ; i++){

        ListNode* temp = head;
             while(temp->next->next != nullptr){
             temp = temp->next;
             }

        ListNode* prev = head->next;
        ListNode* curr = temp->next;

            curr->next = head;
            head = curr;
            temp->next = nullptr;
        }
        return head;
    }
};