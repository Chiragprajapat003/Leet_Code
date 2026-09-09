// Last updated: 9/9/2026, 10:13:58 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    bool isPalindrome(ListNode* head) {
14        
15        ListNode* adress = NULL;
16        ListNode* i = head;
17
18        while(i != NULL){
19            ListNode* new_node = new ListNode;
20            new_node->next = adress;
21            adress = new_node;
22            new_node->val = i->val;
23            i = i->next;
24        }
25
26        i = head;
27        ListNode* j = adress;
28        while(i != NULL){
29            if(i->val != j->val ){
30                return false;
31            }
32            i = i->next;
33            j =  j->next;
34        }
35        return head;
36    }
37};