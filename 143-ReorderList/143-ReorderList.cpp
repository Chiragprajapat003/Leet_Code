// Last updated: 8/16/2026, 9:22:39 PM
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
    void reorderList(ListNode* head) {
        int l = 0;
        ListNode* temp = head;

        while(temp != NULL){
            l++;
            temp = temp->next;
        }

        int mid = l / 2;

        int count = 1;
        ListNode* templ = head;
        ListNode* prev = head;
        for(int i = 0 ; i < mid ; i++){
            templ = templ->next;
            prev = prev->next;
            count++;
        }

        templ = templ->next;
        count++;
         ListNode* nxt = templ;
        while(count <= l){
            int diff = l - count;
                    templ = nxt;
             ListNode* temp_new = head;
            for(int i = 0 ; i < diff ; i++){
               temp_new = temp_new->next;
            }
             nxt = templ ->next;

            prev->next = nullptr;
            templ->next = temp_new->next;
            temp_new->next = templ;
            count++;
        }
   
    }
};