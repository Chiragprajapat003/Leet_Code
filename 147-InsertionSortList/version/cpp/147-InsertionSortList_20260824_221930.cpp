// Last updated: 8/24/2026, 10:19:30 PM
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
13    ListNode* insertionSortList(ListNode* head) {
14
15        ListNode* dummy = new ListNode(-1);
16
17        ListNode* temp = head;
18
19        while (temp != nullptr) {
20
21            ListNode* nxt = temp->next;
22
23           
24            ListNode* check = dummy;
25
26            while (check->next != nullptr &&
27                   check->next->val < temp->val) {
28                check = check->next;
29            }
30
31          
32            temp->next = check->next;
33            check->next = temp;
34
35            temp = nxt;
36        }
37
38        return dummy->next;
39    }
40};