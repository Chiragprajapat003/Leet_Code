// Last updated: 8/16/2026, 9:17:51 PM
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
    vector<int> nextLargerNodes(ListNode* head) {
       vector<int> arr ;

       ListNode* curr = head;
       ListNode* nxt = NULL;

       while(curr != NULL){
        
         nxt = curr->next;
         if(nxt == nullptr){
            arr.push_back(0);
            return arr;
         }
            while(nxt != nullptr && curr->val >= nxt->val){
                nxt = nxt->next;
            }
            if(nxt == NULL){
                arr.push_back(0);
            }else if(nxt->val > curr->val){
        arr.push_back(nxt->val);
        }else{
            arr.push_back(0);
        }
        curr = curr->next;
        
       }
       return arr;
    }
};