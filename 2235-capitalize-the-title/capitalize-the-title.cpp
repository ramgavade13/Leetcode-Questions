class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.size();

        for (int i = 0; i < n; i++) {
            if (title[i] >= 'A' && title[i] <= 'Z') {
                title[i] = title[i] + 32;
            }
        }

        for (int i = 0; i < n; i++) {
            if (i == 0 || title[i - 1] == ' ') {
                int j = i;

                while (j < n && title[j] != ' ') {
                    j++;
                }

                if (j - i >= 3) {
                    if (title[i] >= 'a' && title[i] <= 'z') {
                        title[i] = title[i] - 32;
                    }
                }
            }
        }

        return title;
    }
};