// Last updated: 8/16/2026, 9:12:26 PM
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
    ListNode* removeNodes(ListNode* head) {

        // if (head == NULL || head->next == NULL)
        //     return head;

        // ListNode dummy(0);
        // dummy.next = head;

        // ListNode* prev = &dummy;
        // ListNode* temp = head;

        // while (temp->next != NULL) {

        //     ListNode* temp2 = temp->next;
        //     bool larg = false;

        //     while (temp2 != NULL) {

        //         if (temp2->val > temp->val) {
        //             larg = true;
        //             break;
        //         }

        //         temp2 = temp2->next;
        //     }

        //     if (larg) {

        //         prev->next = temp->next;
        //         temp->next = nullptr;
        //         temp = prev->next;

        //     } else {

        //         temp = temp->next;
        //         prev = prev->next;
        //     }
        // }

        // return dummy.next;

        ListNode* prev = nullptr;
        ListNode* curr = head ;
        ListNode* nxt = nullptr;
        while(curr->next != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nxt;
        }
        curr->next = prev;
        prev = curr;
        head = curr;

        int mx = head->val;

        curr = curr->next;
        
        while(curr != nullptr){
            nxt = curr->next;
            if(curr->val < mx){
                prev->next = nxt;
                curr->next = nullptr;
                curr = nxt;
            }else{
                mx = curr->val;
                prev= prev->next;
                curr = curr->next;
            }
        }

            prev = nullptr;
            curr = head;
            nxt = nullptr;
                while(curr->next != NULL){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr= nxt;
        }
        curr->next = prev;
        prev = curr;
        head = curr;

        

        return head;
    }
};