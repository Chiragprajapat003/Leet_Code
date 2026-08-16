// Last updated: 8/16/2026, 9:24:13 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * size = head;
        int l = 0;

        while(size != NULL){
            l++;
            size = size->next;
        }

        int target = l-n;

        

        if(target == 0){
            ListNode *del = head;
            head = head->next;
            delete del;
            return head;
        }

        ListNode * temp = head;

        for(int i = 1 ; i < target ; i++ ){
            temp = temp->next;
        }
        
        ListNode *del = temp->next;

        temp->next = del->next;
        delete del;

    
    return head;
        
    }
};