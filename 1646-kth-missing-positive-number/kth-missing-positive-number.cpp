class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int num = 1;
       int count = 0;
       int i = 0 ;

       while(true){
        if(i < arr.size() && arr[i] == num){
            i++;

        } else{
            count++;
            if(count == k) return num;
        }
        num++;
       } 
       return -1 ;
    }
};