class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string ss = s + s;

        int res = INT_MAX;
        int diff1 = 0, diff2 = 0;

        for(int i = 0; i < ss.size(); i++) {

            char alt1 = (i % 2) ? '1' : '0';
            char alt2 = (i % 2) ? '0' : '1';

            if(ss[i] != alt1) diff1++;
            if(ss[i] != alt2) diff2++;

            if(i >= n) {
                char prevAlt1 = ((i-n) % 2) ? '1' : '0';
                char prevAlt2 = ((i-n) % 2) ? '0' : '1';

                if(ss[i-n] != prevAlt1) diff1--;
                if(ss[i-n] != prevAlt2) diff2--;
            }

            if(i >= n-1)
                res = min(res, min(diff1, diff2));
        }

        return res;
    }
};