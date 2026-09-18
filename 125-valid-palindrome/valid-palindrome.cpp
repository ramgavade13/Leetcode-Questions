class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size() - 1;
        int t = 0;

        while (t < n) {

            while (t < n && !isalnum(s[t]))
                t++;

            while (t < n && !isalnum(s[n]))
                n--;

            if (tolower(s[t]) != tolower(s[n])) {
                return false;
            }

            t++;
            n--;
        }

        return true;
    }
};