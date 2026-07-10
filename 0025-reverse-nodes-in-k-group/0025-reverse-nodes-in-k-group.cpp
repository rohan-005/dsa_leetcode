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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;

        while (count < k && temp != nullptr) {
            temp = temp->next;
            count++;
        }

        if (count == k) {
            ListNode *prev = nullptr, *upcoming = nullptr, *current = head;

            for (int i = 0; i < k; i++) {
                upcoming = current->next;
                current->next = prev;
                prev = current;
                current = upcoming;
            }

            head->next = reverseKGroup(current, k);
            return prev;
        }
        return head;
    }
};