// Last updated: 9/1/2026, 11:27:43 PM
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
13    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
14        int count = 0;
15        vector<int> ans(2);
16        ListNode* temp = head;
17        while(temp != NULL){
18            count++;
19            temp = temp->next;
20        }
21        if(count < 4){
22            ans[0] = -1;
23            ans[1] = -1;
24            return ans;
25        }
26
27        vector<int> arr;
28
29        ListNode* prev = head;
30        ListNode* curr = head->next;
31         count = 1;
32        while(curr->next != nullptr){
33            ListNode* nxt = curr->next;
34            count++;
35            if((curr->val > prev->val && curr->val > nxt->val) || (curr->val < prev->val && curr->val < nxt->val) ){
36                arr.push_back(count);
37            }
38            prev = curr;
39            curr = nxt;
40        }
41        int max_dis;
42         int min_dis = INT_MAX;
43        if(arr.size() >= 2){
44         max_dis = arr[arr.size()-1]-arr[0];
45        ans[1] = max_dis;
46        }else{
47            ans[1] = -1;
48            ans[0] = -1;
49            return ans;
50        }
51
52       
53        for(int i = 0 ; i < arr.size()-1 ; i++){
54            min_dis = min(min_dis , arr[i+1]-arr[i]);
55        }
56        ans[0] = min_dis;
57        return ans;
58    }
59};