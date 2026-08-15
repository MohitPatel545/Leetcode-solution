class Solution {
public:
    int romanToInt(string s) {
        map<char, int> ans;

        ans['I'] = 1;
        ans['V'] = 5;
        ans['X'] = 10;
        ans['L'] = 50;
        ans['C'] = 100;
        ans['D'] = 500;
        ans['M'] = 1000;

        int a = 0;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && ans[s[i]] < ans[s[i + 1]]) {
                a -= ans[s[i]];
            } else {
                a += ans[s[i]];
            }
        }

        return a;
    }
};