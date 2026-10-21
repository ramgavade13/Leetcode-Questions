class Solution {
public:
    bool checkRecord(string s) {
        int count = 0, dount = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A')
                dount++;

            if (i >= 2 && s[i] == 'L' &&
                s[i - 1] == 'L' && s[i - 2] == 'L')
                return false;
        }

        if (dount >= 2)
            return false;

        return true;
    }
};