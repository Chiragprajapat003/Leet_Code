// Last updated: 8/16/2026, 9:22:31 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
       unordered_set<ListNode*> st;

       while(headA){
        st.insert(headA);
        headA = headA->next;
       }

       while(headB){
        if(st.count(headB)){
            return headB;
        }
        headB = headB->next;
       }
    return NULL;
    }
};