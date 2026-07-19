class Solution {
public:
    int divide(int dividend, int divisor) {
        long long q = (long long)dividend/divisor;
        // long long upper = pow(2,31);
        if(q > INT_MAX) return INT_MAX;
        if(q < INT_MIN) return INT_MIN;
     
        return q;
    }
};