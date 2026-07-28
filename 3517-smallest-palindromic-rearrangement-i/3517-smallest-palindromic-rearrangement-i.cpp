class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> alphabet(26 , 0);
        for(char ch: s){
            alphabet[ch - 'a']++;
        }
        int left = 0;
        int right = s.length() - 1;
        string ans(right+1, ' ');
        for(int i = 0;i<26; i++){
            while(alphabet[i] >= 2){
                ans[left] = char('a' + i);
                ans[right] = char('a' + i);
                left++;
                right--;
                alphabet[i] -= 2;
            }
            if(alphabet[i] == 1){
                ans[s.length()/2] = char('a' + i);
            }
        }
        return ans;
    }
};