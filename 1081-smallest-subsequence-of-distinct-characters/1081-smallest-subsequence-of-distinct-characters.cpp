class Solution {
public:
    string smallestSubsequence(string s) {
        int alpha[26] = {0};
        bool seen[26] = {false};
        string ans;
        for(char c : s){
            int index = c - 'a';
            alpha[index]++;
        }
        for(char c : s){
            alpha[c - 'a']--;
            if(seen[c - 'a']) continue;
            while(!ans.empty() && ans.back() > c && alpha[ans.back() - 'a'] > 0){
                seen[ans.back() - 'a'] = false;
                ans.pop_back();
            }
            ans.push_back(c);
            seen[c - 'a'] = true;

        }
        return ans;
    }
};