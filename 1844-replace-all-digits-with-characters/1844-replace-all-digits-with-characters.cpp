class Solution {
public:
    string replaceDigits(string s) {
        int n = s.length();
        int i = 1;
        while(i < n){
            if('a' <= s[i] && s[i] <= 'z'){
                i++;
                continue;
            }
            s[i] = s[i-1] + (s[i] - '0');
            i++;
        }

        return s;
    }
};