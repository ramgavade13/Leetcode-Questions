class Solution {
public:
    bool isPerfectSquare(int num) {
       if(num < 1){
        return false ;
       } 
       long long s = 1 , l = num ;
       while(s <= l){
        long long mid = s + (l - s) / 2;
        long long square = mid * mid ;

        if(square == num ) return true ;

        else if (square < num ) s = mid +1 ;

        else l = mid -1 ;
       }
       return false ;
    }
};