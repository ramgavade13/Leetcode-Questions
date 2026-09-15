class Solution {
public:
    int count ;
    int addDigits(int num) {
        while(num >= 10){
            int count=0;

            while( num > 0 ){
        int digit = num % 10 ;
        count+= digit ;
        num /= 10;
    }
    
    num = count ;
    
    }
    return num;
    }
};