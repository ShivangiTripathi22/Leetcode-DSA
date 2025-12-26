class Solution {
public:
    int bestClosingTime(string customers) {
        int penalty = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y')
                penalty++;
        }
        int min = penalty;
        int besthour = 0;
        for (int i = 0; i < customers.size(); i++) {
            if (customers[i] == 'Y')
                penalty--;
            else {
                penalty++;
            }
            if(penalty < min) {
                min = penalty;
                besthour = i + 1;
            }
        }
        return besthour;
    }
};