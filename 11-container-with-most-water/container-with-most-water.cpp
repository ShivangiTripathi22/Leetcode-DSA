class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size() - 1;
        int i = 0;
        int area = 0;
        int maxi = 0;
        while (i < j) {
            area = (j - i) * min(height[i], height[j]);
            maxi = max(area, maxi);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxi;
    }
};