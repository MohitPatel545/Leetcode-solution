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
    ListNode* reverseList(ListNode* head) {

        // Base case
        if (head == NULL || head->next == NULL) {
            return head;
        }

        // Recursive call
        ListNode* newHead = reverseList(head->next);

        // Reverse the link
        head->next->next = head;

        // Break the old link
        head->next = NULL;

        return newHead;
    }
};