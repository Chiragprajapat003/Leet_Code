// Last updated: 8/16/2026, 9:11:44 PM
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        unordered_set<int> st(nums.begin(), nums.end());

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;
        ListNode* temp = head;

        while (temp != nullptr) {

            if (st.count(temp->val)) {

                ListNode* nxt = temp->next;

                prev->next = nxt;

                // delete temp;

                temp = nxt;

            } else {

                prev = temp;
                temp = temp->next;
            }
        }

        return dummy.next;
    }
};