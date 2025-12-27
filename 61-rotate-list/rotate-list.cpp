class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Count length and reach tail
        int n = 1;
        ListNode* temp = head;
        while (temp->next) {
            temp = temp->next;
            n++;
        }

        // Make circular
        temp->next = head;

        // Effective rotation
        k = k % n;
        if (k == 0) {
            temp->next = nullptr;
            return head;
        }

        // Find new tail
        ListNode* newTail = head;
        for (int i = 1; i < n - k; i++)
            newTail = newTail->next;

        // New head
        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
