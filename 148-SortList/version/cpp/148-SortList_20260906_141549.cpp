// Last updated: 9/6/2026, 2:15:49 PM
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
11
12class Solution {
13public:
14
15    ListNode* sortList(ListNode* head) {
16
17        if (head == NULL || head->next == NULL) {
18            return head;
19        }
20
21 
22        ListNode* slow = head;
23        ListNode* fast = head;
24        ListNode* temp = NULL;
25
26        while (fast != NULL && fast->next != NULL) {
27            temp = slow;
28            slow = slow->next;
29            fast = fast->next->next;
30        }
31
32    
33        temp->next = NULL;
34
35        
36        ListNode* left = sortList(head);
37        ListNode* right = sortList(slow);
38
39       
40        return mergeList(left, right);
41    }
42
43
44    ListNode* mergeList(ListNode* l1, ListNode* l2) {
45
46        ListNode dummy(0);
47        ListNode* curr = &dummy;
48
49        while (l1 != NULL && l2 != NULL) {
50
51            if (l1->val <= l2->val) {
52                curr->next = l1;
53                l1 = l1->next;
54            }
55            else {
56                curr->next = l2;
57                l2 = l2->next;
58            }
59
60            curr = curr->next;
61        }
62
63        if (l1 != NULL) {
64            curr->next = l1;
65        }
66        else {
67            curr->next = l2;
68        }
69
70        return dummy.next;
71    }
72};