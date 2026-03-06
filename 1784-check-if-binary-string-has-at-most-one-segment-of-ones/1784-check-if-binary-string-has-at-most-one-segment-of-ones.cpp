class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        // int a = stoi(s);
        // if(s == "1" || a%10 == 0 ){
        //     return true;
        // }
        // // if(s=="0") return false;

        for(int i = 0;i<n-1;i++){
            if(s[i] == '0' && s[i+1] == '1'){
                return false;
            }
        }

        return true;
    }
};