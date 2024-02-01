#include<bits/stdc++.h>
using namespace std;
int main()
{
         std::string ans = "";
        int i = 0, j = 0;
        int minLen = INT_MAX;
        std::unordered_map<char, int> charCount;

        for (int k = 0; k < t.length(); k++) {
            char c = t[k];
            charCount[c]++;
        }

        int requiredChars = charCount.size();

        while (j < s.length()) {
            char c = s[j];

            if (charCount.find(c) == charCount.end()) {
                j++;
                continue;
            } else {
                charCount[c]--;
                if (charCount[c] == 0)
                    requiredChars--;
            }

            while (requiredChars == 0) {
                if (minLen > j - i + 1) {
                    ans = s.substr(i, j - i + 1);
                    minLen = std::min(minLen, j - i + 1);
                }

                char c1 = s[i];

                if (charCount.find(c1) == charCount.end()) {
                    i++;
                } else {
                    charCount[c1]++;
                    if (charCount[c1] > 0)
                        requiredChars++;
                    i++;
                }

                if (requiredChars == 0) {
                    if (minLen > j - i + 1) {
                        ans = s.substr(i, j - i + 1);
                        minLen = j - i + 1;
                    }
                }
            }

            j++;
        }

        return ans;
    }
 return 0;
}