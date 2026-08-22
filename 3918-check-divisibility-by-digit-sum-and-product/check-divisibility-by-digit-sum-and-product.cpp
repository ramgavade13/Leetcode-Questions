class Solution {
public:
    bool checkDivisibility(int n) {
        int digit =0;
        int mul=1;
        int add=0;
        int p=n;
        while( n>0 ){
            digit = n % 10;
            mul *= digit ;
            add += digit;
            n/=10;
        }
        int a= add + mul;
        return p % a== 0;
    }
};