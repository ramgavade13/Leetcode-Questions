class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char ch : stones){
            for(char a : jewels){
                if(ch == a) count++;
            }
        }
        return count ;
    }
};