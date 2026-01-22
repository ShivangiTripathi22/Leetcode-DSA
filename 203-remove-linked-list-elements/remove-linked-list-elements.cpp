class Solution {
public:
    void del(ListNode* fake) {
        ListNode* temp = fake->next;
        fake->next = temp->next;
        delete temp;
    }

    ListNode* removeElements(ListNode* head, int val) {
        ListNode* fake = new ListNode(0);
        fake->next = head;

        ListNode* curr = fake;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                del(curr);
            } else {
                curr = curr->next;
            }
        }

        head = fake->next;
        delete fake;
        return head;
    }
};
