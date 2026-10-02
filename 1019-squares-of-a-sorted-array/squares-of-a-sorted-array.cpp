class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int m = nums[i] * nums[i];
            v.push_back(m);
        }
        sort(v.begin() , v.end());
        return v;
    }
};