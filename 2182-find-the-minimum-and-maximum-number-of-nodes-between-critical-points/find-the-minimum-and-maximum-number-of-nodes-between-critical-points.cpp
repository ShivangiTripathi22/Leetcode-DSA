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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head->next->next == NULL) {
            return {-1, -1};
        }

        vector<int> ans;
        while (head) {
            ans.push_back(head->val);
            head = head->next;
        }

        int n = ans.size();

        vector<int> critical_points;

        for (int i = 1; i < n - 1; i++) {
            if (ans[i] > ans[i + 1] && ans[i] > ans[i - 1]) {
                critical_points.push_back(i);
            } else if (ans[i] < ans[i + 1] && ans[i] < ans[i - 1]) {
                critical_points.push_back(i);
            }
        }

        if (critical_points.size() < 2) {
            return {-1, -1};
        }

        int min_dist = INT_MAX;

        for (int i = 1; i < critical_points.size(); i++) {
            min_dist =
                min(min_dist, critical_points[i] - critical_points[i - 1]);
        }
        int max_dist = critical_points.back() - critical_points.front();

        return {min_dist, max_dist};
    }
};