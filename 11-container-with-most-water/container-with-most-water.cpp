class Solution {
public:
    int maxArea(vector<int>& height) {
       int n= height.size()-1;
       int left=0,right=n; 
       int maxarea=0;
       while(left<right){
         int area = min ( height[left] , height[right] ) * (right - left);
        maxarea =max(area , maxarea);

        if(height[left] < height[right]){
            left++;
        }
        else{
            right--;
        }

       }
       return maxarea;
    }
};