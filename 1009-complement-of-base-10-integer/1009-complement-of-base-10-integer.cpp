class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int binary[32];
        int i = 0;
        int temp = n;
        while (temp > 0) {
            binary[i] = temp % 2;
            temp = temp / 2;
            i++;
        }
        for(int j = 0;j<i;j++){
            binary[j] = binary[j] == 1 ? 0 : 1;
        }
        int res = 0;
        cout << i;
        for(int j = 0;j<i;j++){
            res += binary[j]*pow(2,j);
        }

        // for (int j = i - 1; j >= 0; j--) {
        //     cout << binary[j];
        // }

        return res;
    }
};