class Solution {
public:
    int numberOfSubstrings(string s) {
        int last[3]={-1,-1,-1},count=0; // last occurrence of a, b, c
        
        for (int i = 0; i < s.length(); i++) {
            last[s[i] - 'a'] = i;

            if (last[0] != -1 && last[1] != -1 && last[2] != -1) {
                count += min({last[0],last[1],last[2]}) + 1;
            }
        }

        return count;
    }
};