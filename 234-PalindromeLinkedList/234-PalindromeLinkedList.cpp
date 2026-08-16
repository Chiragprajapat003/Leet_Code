// Last updated: 8/16/2026, 9:21:11 PM
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
    bool isPalindrome(ListNode* head) {
        // vector<int> store ;
        // int l = 0;
        // ListNode*  temp = head;
        // while(temp){
        //     l++;
        //     temp = temp->next;
        // }

        // int mid = l/2;
        // int j = 0;
        // ListNode* templ = head;
        // while(j < mid){
        //     store.push_back(templ->val);
        //     templ = templ->next;
        //     j++;
        // }
        // if(l%2 != 0){
        //     templ = templ->next;
        // }
        // for(int i = 0 ; i < mid ; i++){
        //     if(templ->val != store[mid-1-i]){
        //         return false;
        //     }
        //     templ = templ->next;
        // }
        // return true;


        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
         
        }
        ListNode* prev = nullptr;
        ListNode* curr = slow;
        
        while(curr != nullptr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            
        }
        ListNode* low = head;
        ListNode* high = prev;

        while(high != nullptr){
            if(low->val != high->val){
                return false;
            }else{
                low = low->next;
                high = high->next;
            }

        }
        return true;
    }

};