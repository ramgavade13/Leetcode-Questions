class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int start = 0;
        int one = 0;
        string ans = "";

        for (int end = 0; end < n; end++) {

            if (s[end] == '1') {
                one++;
            }

            // More than k ones → shrink window
            while (one > k) {
                if (s[start] == '1') {
                    one--;
                }
                start++;
            }

            // Exactly k ones
            while (one == k && s[start] == '0') {
                start++;
            }

            if (one == k) {
                string curr = s.substr(start, end - start + 1);

                if (ans == "" ||
                    curr.length() < ans.length() ||
                    (curr.length() == ans.length() && curr < ans)) {
                    
                    ans = curr;
                }
            }
        }

        return ans;
    }
};