class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        // suffixMin[i] = minimum element from i to n-1
        vector<int> suffixMin(n);
        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], nums[i]);
        }

        int prefixMax = 0;

        for (int i = 0; i < n; i++) {
            // maximum element from 0 to i
            prefixMax = max(prefixMax, nums[i]);

            // instability score
            if (prefixMax - suffixMin[i] <= k) {
                return i;
            }
        }

        return -1;
    }
};