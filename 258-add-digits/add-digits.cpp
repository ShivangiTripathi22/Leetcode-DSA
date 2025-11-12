class Solution {
public:
    int add(int num) {
        int rem = 0, sum = 0, temp;
        if (num == 0)
            return 0;
        while (num != 0) {

            rem = num % 10;
            sum = sum + rem;
            num = num / 10;
        }
        if (sum < 10)
            return sum;
        else
            return add(sum);

        
    }
    int addDigits(int num) { return add(num); }
};