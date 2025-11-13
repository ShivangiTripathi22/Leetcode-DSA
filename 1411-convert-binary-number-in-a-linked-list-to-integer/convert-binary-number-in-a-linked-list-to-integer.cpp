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
    int getDecimalValue(ListNode* head) {
        vector<int>ans;
         ListNode* temp = head;
        while(temp!=nullptr){
            // temp->data=temp[i];
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int n=ans.size(),res=0;
        for(int i=0;i<n;i++){
            res+=ans[i]*pow(2,n-1-i);
        }
        return res;
        
    }
};