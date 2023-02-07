class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.size();
        string str = "";
        for (int i = n - 1; i >= 0; i--) {
            if (!isalpha(s[i])) {
                continue;
            }
            str += s[i];
        }
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (!isalpha(s[i])) {
                continue;
            }
            s[i] = str[index++];
        }
        return s;
    }
};
