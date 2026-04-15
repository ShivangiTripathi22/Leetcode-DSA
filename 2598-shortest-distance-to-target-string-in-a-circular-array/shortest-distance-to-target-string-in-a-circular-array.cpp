class Solution {
public:
    
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int distance = 0;
        int ans = INT_MAX;
        int n= words.size();
        for (int i = 0; i < n; i++) {
            if (target == words[i]) {
                distance = abs(startIndex - i);
                int mini=min(distance, n - distance);
                ans = min(ans, mini);
            }
        }
        return ans == INT_MAX ? -1 : ans;
    }
};