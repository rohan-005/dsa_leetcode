class Solution {
public:
    int count = 0;
    string result = "";

    void generateHappyStrings(int n, int k, string curr) {
        if (curr.length() == n) {
            count++;
            if (count == k) {
                result = curr;
            }
            return;
        }

        for (char ch = 'a'; ch <= 'c'; ch++) {
            if (curr.empty() || curr.back() != ch) {  // Ensure no consecutive characters are the same
                generateHappyStrings(n, k, curr + ch);
                if (!result.empty()) return;  // Stop recursion when result is found
            }
        }
    }

    string getHappyString(int n, int k) {
        generateHappyStrings(n, k, "");
        return result;
    }
};
