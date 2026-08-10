class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);
        for(char ch: s){
            int index = ch - 'a';
            freq[index]++;
        }
        for(int i = 0;i<s.length(); i++){
            int in = s[i] - 'a';
            if(freq[in] == 1){
                return i;
            }
        }
        return -1;
    }
};