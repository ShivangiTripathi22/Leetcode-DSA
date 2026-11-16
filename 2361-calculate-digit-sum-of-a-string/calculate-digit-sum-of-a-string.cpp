class Solution {
public:
    string ans(string s, int k) {
        int i = 0;
        int j = k - 1;
        int sum = 0;
        string res = "";

        while (i < s.length()) {
            sum = sum + (s[i] - '0');

            if (i == j || i == s.length() - 1) {
                res = res + to_string(sum);
                sum = 0;
                j = j + k;
            }

            i = i + 1;
        }
        return res;
    }

    string digitSum(string s, int k) {

        if (s.length() <= k) {
            return s;
        }

        string result = ans(s, k);
        return digitSum(result, k);
    }
};
