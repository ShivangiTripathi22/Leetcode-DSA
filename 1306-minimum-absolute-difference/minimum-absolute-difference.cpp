class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> ans;
        int mini = INT_MAX;

        int i = 1;
        
        while (i < arr.size()) {
            mini = min(mini, arr[i] - arr[i - 1]);
            i++;
        }

        i = 1;
       
        while (i < arr.size()) {
            if (arr[i] - arr[i - 1] == mini) {
                ans.push_back({arr[i - 1], arr[i]});
            }
            i++;
        }

        return ans;
    }
};
