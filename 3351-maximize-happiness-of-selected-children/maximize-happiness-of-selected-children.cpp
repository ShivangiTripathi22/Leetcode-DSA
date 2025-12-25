class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long sum = 0;
        for (int i = 0; i < k; i++) {
            long long happy = happiness[i] - i;
            if (happy < 0)
                happy = 0;
            sum = sum + happy;
        }
        return sum;
    }
};