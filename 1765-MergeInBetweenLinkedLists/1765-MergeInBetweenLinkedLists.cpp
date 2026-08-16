// Last updated: 8/16/2026, 9:15:44 PM
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        ListNode* tail2 = list2;
        while(tail2->next!= nullptr){
            tail2 = tail2->next;
        }
        ListNode* f1 =  list1;
        ListNode* l1 = list1;
        int i = 0;
        ListNode* temp = list1;
        while(i <= b+1 && temp != nullptr ){
            if(i == a-1){
                f1 = temp;
            }
            if(i == b+1){
                
                l1 = temp;
                
            }
            i++;
            temp = temp->next;
        }
       

        f1->next = list2;
        tail2->next = l1;

    return list1;
    }
};