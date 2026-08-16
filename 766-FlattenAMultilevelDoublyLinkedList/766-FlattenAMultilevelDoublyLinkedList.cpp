// Last updated: 8/16/2026, 10:51:17 PM
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/
class Solution {
public:
    Node* flatten(Node* head) {
        Node* curr = head;

        while (curr != nullptr) {

            if (curr->child != nullptr) {

                Node* next = curr->next;
                Node* child = flatten(curr->child);

                curr->next = child;
                child->prev = curr;
                curr->child = nullptr;

                Node* tail = child;

                while (tail->next != nullptr) {
                    tail = tail->next;
                }

                tail->next = next;

                if (next != nullptr) {
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};