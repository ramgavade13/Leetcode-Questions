class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum =0;
        int squaresum =0;
        while( n > 0){
            int digit = n% 10;
            sum += digit ;
            squaresum += digit * digit ;
            n/= 10;

        }
        int m= squaresum - sum ;
        if(m >= 50){

         return true ;
        }
        return false;

    }
};