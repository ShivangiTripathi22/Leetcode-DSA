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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,bool> mp;
        for(int i = 0 ; i < nums.size() ; ++i) {
            mp[nums[i]]=true;
        }
        ListNode* curr = head;
        ListNode* ret = new ListNode(0);
        ListNode* prev = new ListNode(0);
        while(curr!=nullptr) {
            if(mp[curr->val]) {
                prev->next = curr->next;
                curr = prev->next;
            }
            else {
                if(ret->val == 0) {
                    ret = curr;
                }
                prev = curr;
                curr = curr->next;
            }
        }
        return ret;
    }
};