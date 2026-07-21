class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' ||  ch == 'u'|| ch == 'U') return true;
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int st = 0;
        int e = s.length() - 1;
        while(st <= e){
            if(isVowel(s[st]) && isVowel(s[e])){
                swap(s[st] , s[e]);
                st++;
                e--;
            }
            else if(!isVowel(s[st])) st++;
            else e--;
        }
        return s;
    }
};