class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left  = 0;
        int curr =0;
        int min_length = INT_MAX ;

        for(int right = 0; right < nums.size(); ++right){
            curr += nums[right];

            while(curr >= target){
                min_length = min (min_length , right - left + 1 );
                curr -= nums[left];
                left++;
            }

        }
        return min_length == INT_MAX ? 0 : min_length ;
    }
};