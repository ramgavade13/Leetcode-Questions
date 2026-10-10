class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0 ;
        for(int num : nums){
            sum += num ;
        }
        int d = 0;
        for(int num : nums){
            while(num >= 10){
                int digit = num % 10 ;
                d += digit ;
                num /= 10 ;
            }
            d += num ;
        }
        return sum - d;
    }
};