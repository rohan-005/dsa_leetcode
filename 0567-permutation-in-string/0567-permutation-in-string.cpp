class Solution {
public:
    // int totalVal(string s) {
    //     int ans = 0;
    //     for (int i = 0; i < s.length(); i++) {
    //         ans += (int)s[i];
    //     }

    //     return ans;
    // }
    bool checkInclusion(string s1, string s2) {
        // int cs1 = 0, cs2 = 0;
        int n = s1.length();
        // cs1 = totalVal(s1);
        if (n>s2.length()) return false;
        sort(s1.begin(), s1.end());
        for (int i = 0; i <= s2.length()-n; i++) {
            string a = "";
            for (int j = i; j < i + n; j++) {
                a += s2[j];
            }
            // cs2 = totalVal(a);
            sort(a.begin(), a.end());
            if (s1 == a)
                return true;
            // if(cs2==cs1){
            //     return true;
            // }
        }
        // cout << cs1 << " " << cs2;
        return false;
    }
};