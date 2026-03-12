class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n = s1.length();
        int m = s2.length();

        if (n > m) return false;

        sort(s1.begin(), s1.end());

        for (int i = 0; i <= m - n; i++) {

            string a = "";

            for (int j = i; j < i + n; j++) {
                a += s2[j];
            }

            sort(a.begin(), a.end());

            if (a == s1)
                return true;
        }

        return false;
    }
};