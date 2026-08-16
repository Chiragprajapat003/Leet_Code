// Last updated: 8/16/2026, 9:23:15 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
    unordered_map<int , int> mp;
    ListNode* temp = head;

      while(temp != nullptr){
        mp[temp->val]++;
        temp = temp->next;
      }

    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;

    temp  = head;

    while(temp){
        if(mp[temp->val] > 1){
            prev->next = temp->next;
        }else {
            prev = temp;
        }
        temp = temp->next;
    }
        return dummy.next;
    }
};