class Solution {
public:
    int numberOfSteps(int num) {
        int temp = num;
        int steps = 0;

        while(temp !=0 ){
            if(temp%2==0){
                temp /= 2; 
                steps++;
            }
            if(temp%2!=0){
                temp -=1;
                steps++;
            }
            
            
        }
        return steps;
    }
};