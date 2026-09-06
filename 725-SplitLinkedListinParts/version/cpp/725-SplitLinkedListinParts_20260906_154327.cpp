// Last updated: 9/6/2026, 3:43:27 PM
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
13    vector<ListNode*> splitListToParts(ListNode* head, int k) {
14           vector<ListNode*> ans;
15
16        ListNode* temp = head;
17        int count = 0;
18        while(temp != nullptr){
19            count++;
20            temp = temp->next;
21        }
22
23        int size;
24        if(count > k){
25         size = count/k;
26        }else {
27            size = 1;
28        }
29
30
31        int extra;
32        if(count > k){
33             extra = count%k;
34        }else{
35            extra = 0;
36        }
37        
38
39        temp = head;
40        
41        while(k > 0 && temp != NULL){
42            int size_new = size;
43        ListNode* prev = temp;
44        while(size_new-1 > 0 && temp != NULL ){
45           
46            size_new--;
47            temp = temp->next;
48        }
49
50        if(extra > 0){
51            extra--;
52            temp = temp->next;
53        }
54
55        ListNode* nxt = temp->next;
56        temp->next = nullptr;
57        
58        ans.push_back(prev);
59        prev = nxt;
60        temp = nxt;
61
62        
63        size_new = size;
64        k--;
65        }
66
67
68        while(k > 0){
69            ans.push_back(NULL);
70            k--;
71        }
72
73        return ans;
74    }
75};