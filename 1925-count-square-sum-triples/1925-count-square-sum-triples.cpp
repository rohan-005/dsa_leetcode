class Solution {
public:
    int countTriples(int n) {
        int count = 0;

        vector <int> sqr(n+1);
        for(int i = 1;i<=n;i++){
            sqr[i] = i*i;
        }
        // for(int i = 1;i<=n;i++){
        //     cout << sqr[i] << " ";
        // }

        for(int i = 1;i<=n;i++){
            for(int j = i+1;j<=n;j++){
                int sum = sqr[i] + sqr[j];
                // cout<<sum << " ";
                int c = sqrt(sum);
                // cout << c;
                if(c <= n && sqr[c] == sum){
                    count++;
                    count++;
                }
            }
        }
        return count;
    }
};