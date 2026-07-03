class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double res = -100000000;
        double sum = 0;
        int n = nums.size();
        for(int i = 0;i<k;i++){
            sum+=nums[i];
        }

        res = sum;

        for(int i = k;i<n;i++){
            sum = sum - nums[i - k] + nums[i];
            if(sum > res) res = sum;
        }

        return res/k;
        // for(int i = 0;i<=n-k;i++){
        //     double sum = 0;
        //     for(int j = i;j<i+k;j++){
        //         sum+= nums[j];
        //     }
        //     sum/=k;
        //     if(sum>res) res = sum;
        // }

        return res;
    }
};