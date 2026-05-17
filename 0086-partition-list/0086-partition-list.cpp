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
    ListNode* partition(ListNode* head, int x) {
        if (!head) return nullptr;
        ListNode* smallDummy = new ListNode(0);
        ListNode* largeDummy = new ListNode(0);
        ListNode* smallTail = smallDummy;
        ListNode* largeTail = largeDummy;
        ListNode* curr = head;
        while (curr) {
            if (curr->val < x) {
                smallTail->next = curr;
                smallTail = smallTail->next;
            } else {
                largeTail->next = curr;
                largeTail = largeTail->next;
            }
            curr = curr->next;
        }
        smallTail->next = largeDummy->next;
        largeTail->next = nullptr;
        ListNode* newHead = smallDummy->next;
        delete smallDummy;
        delete largeDummy;
        return newHead;
    }
};