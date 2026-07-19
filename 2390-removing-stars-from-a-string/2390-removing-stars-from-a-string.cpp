class Solution {
public:
    string removeStars(string s) {
        // stack<char> st;
        // for (char c : s) {
        //     if (c == '*') {
        //         if (!st.empty())
        //             st.pop();
        //     } else {
        //         st.push(c);
        //     }
        // }

        string ans = "";
        for(char a : s){
            if(a=='*'){
                ans.pop_back();
            }
            else{
                ans.push_back(a);
            }
        }
        return ans;
    }
};