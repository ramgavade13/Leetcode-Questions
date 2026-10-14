class Solution {
public:
    int mul = 1;
    int sum = 0;
    int subtractProductAndSum(int n) {
        while(n > 0 ){
            int digit = n % 10 ;
            mul *= digit ;
            sum += digit ;
            n/= 10;
        }

        return mul - sum ;
    }
};