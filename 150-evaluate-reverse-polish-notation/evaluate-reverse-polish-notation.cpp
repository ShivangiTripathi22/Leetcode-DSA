class Solution {
public:
    int operation(int num1, int num2, string tokens) {
        if (tokens == "+")
            return num2 + num1;
        if (tokens == "-")
            return num2 - num1;
        if (tokens == "*")
            return num2 * num1;
        if (tokens == "/")
            return num2 / num1;

        return 0;
    }
    int evalRPN(vector<string>& tokens) {

        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            string t = tokens[i];
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();

                int ans = operation(num1, num2, t);
                st.push(ans);
            }
            else 
                st.push(stoi(t));
        }
        return st.top();
    }
};