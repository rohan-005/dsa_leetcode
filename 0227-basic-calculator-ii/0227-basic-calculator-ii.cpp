class Solution {
public:
    int calculate(string s) {
        long long ans = 0, prev = 0, curr = 0;
        char op = '+';

        for (int i = 0; i <= s.size(); i++) {
            if (i < s.size() && isdigit(s[i])) {
                curr = curr * 10 + (s[i] - '0');
            }

            if (i == s.size() || (!isdigit(s[i]) && s[i] != ' ')) {
                if (op == '+') {
                    ans += prev;
                    prev = curr;
                } else if (op == '-') {
                    ans += prev;
                    prev = -curr;
                } else if (op == '*') {
                    prev *= curr;
                } else if (op == '/') {
                    prev /= curr;
                }

                op = s[i];
                curr = 0;
            }
        }

        return ans + prev;
    }
};