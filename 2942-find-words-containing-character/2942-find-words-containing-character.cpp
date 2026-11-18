class Solution {
public:

    bool check(string word, char x){
        for(int i = 0;i < word.length(); i++){
            if(word[i] == x){
                return true;
            }
        }
        return false;
    }

    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int k = 0;
        for(string word: words){
            if(check(word, x)){
                ans.push_back(k);
            }
            k++;
        }

        return ans;
    }
};