class Solution {
public:
    
    string ans(string s, int k) {
        int i = 0;
        int j = k - 1; // 2. Used 'k - 1' instead of hardcoding 2
        int sum = 0;
        string res = "";

        // 3. Loop until 'i' reaches the end of the string
        while (i < s.length()) {
            sum = sum + (s[i] - '0'); // 4. Subtracted '0' to get the actual digit, not ASCII

            // 5. Check if we hit the end of the current group (j) OR the end of the string
            if (i == j || i == s.length() - 1) {
                res = res + to_string(sum); // 6. Used to_string(sum) instead of "sum"
                sum = 0;                    // 7. Reset sum for the next group
                j = j + k;                  // 8. Move the group boundary forward by k
            }
            
            i = i + 1;
        }
        return res;
    }

    string digitSum(string s, int k) {
        // 9. Base case: if the string is already size k or smaller, return it
        if (s.length() <= k) {
            return s;
        }

        // 10. Store the result as a 'string', then recursively call digitSum on it
        string result = ans(s, k);
        return digitSum(result, k);
    }
};
