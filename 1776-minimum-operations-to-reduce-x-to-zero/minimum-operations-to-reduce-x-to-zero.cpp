class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(int num : nums) total+= num ;

        int target = total -x ;

        if(target < 0) return -1;

        if(target == 0) return nums.size();

        int left =0;
        int sum = 0;

        int maxlen = -1;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];

            while(sum > target && left <= i){
                sum -= nums[left];
                left++;
            }

            if(sum == target){
                maxlen = max(maxlen , i-left + 1);
            }
        }

        if(maxlen == -1) return -1 ;

        return nums.size()-maxlen ;
        
    }
};