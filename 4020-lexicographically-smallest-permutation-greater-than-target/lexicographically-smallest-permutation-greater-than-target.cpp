class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        int freq[26] = {};

        for (char c : s) {
            freq[c - 'a']++;
        }

        // Match target from left to right
        int i = 0;

        while (i < n && freq[target[i] - 'a'] > 0) {
            freq[target[i] - 'a']--;
            i++;
        }

        while (true) {

            // Try to make current position greater
            if (i < n) {
                int need = target[i] - 'a';

                for (int c = need + 1; c < 26; c++) {

                    if (freq[c] == 0)
                        continue;

                    string ans = target.substr(0, i);

                    ans += char('a' + c);

                    freq[c]--;

                    // Remaining characters in smallest order
                    for (int j = 0; j < 26; j++) {
                        while (freq[j] > 0) {
                            ans += char('a' + j);
                            freq[j]--;
                        }
                    }

                    return ans;
                }
            }

            // Go back one position
            if (i == 0)
                break;

            i--;
            freq[target[i] - 'a']++;
        }

        return "";
    }
};