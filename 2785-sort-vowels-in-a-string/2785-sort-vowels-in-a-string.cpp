class Solution {
public:
    string sortVowels(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // Count vowels
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {

                lower[s[i] - 'a']++;
                s[i] = '#';
            }
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||
                     s[i] == 'O' || s[i] == 'U') {

                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        // Create sorted vowels
        string ans;

        // Uppercase vowels first
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;

            while (upper[i] > 0) {
                ans += c;
                upper[i]--;
            }
        }

        // Lowercase vowels
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;

            while (lower[i] > 0) {
                ans += c;
                lower[i]--;
            }
        }

        // Put sorted vowels back
        int second = 0;

        for (int first = 0; first < s.size(); first++) {
            if (s[first] == '#') {
                s[first] = ans[second];
                second++;
            }
        }

        return s;
    }
};