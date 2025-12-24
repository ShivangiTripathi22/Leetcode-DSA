class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(), capacity.end());
        int suma = 0, sumc = 0;
        for (int i = 0; i < apple.size(); i++) {
            suma += apple[i];
        }

        for (int i = capacity.size() - 1; i >= 0; i--) {
            if (suma <= 0) {
                break;
            }
            suma = suma - capacity[i];
            sumc++;
        }

        return sumc;
    }
};