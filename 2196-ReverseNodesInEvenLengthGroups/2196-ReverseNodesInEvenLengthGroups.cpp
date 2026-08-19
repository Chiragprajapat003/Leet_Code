// Last updated: 8/19/2026, 3:33:08 PM
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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* temp = head;
        ListNode* back = nullptr;
        int count = 0;
        
        int start = 1;
        
        while(temp != nullptr){
            ListNode* check = temp ;
            int elem = 0;
            while(elem < start && check != nullptr ){
                elem++;
                check = check->next;
            }
            if(elem %2 != 0){
                while(elem > 0){
                back = temp;
                temp = temp->next;
                count++;
                if(count == start ){
                    start++;
                    count = 0;
                }
                elem--;
                }
            }else{
                ListNode* curr = temp;
                ListNode* prev = curr;
                int i = 0;
                while(i < start-1 && prev->next != nullptr){
                    prev = prev->next;
                    i++;
                }
                back->next = prev;
                
                prev = prev->next;
                ListNode* nxt = nullptr;
                while(count < elem ){
                    nxt = curr->next;
                    curr->next = prev;
                    prev = curr;
                    curr = nxt;
                    count++;
                }
                back = temp;
                temp = temp->next;

                start++;
                count = 0;
            }
        }
        return head;
    }
};