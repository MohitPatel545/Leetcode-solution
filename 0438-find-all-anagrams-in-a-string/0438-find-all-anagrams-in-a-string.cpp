class Solution {
public:

    bool equal(vector<int> count1 , vector<int> count2){
        for(int i = 0;i<26; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {

        if(p.length() > s.length()) return {};
        vector<int>count1(26,0);
        for(char ch: p){
            int i = ch - 'a';
            count1[i]++;
        }
        vector<int> count2(26,0);
        vector<int> ans;
        int k = 0;
        int window = p.length();
        int i = 0;
        while(i < window){
            count2[s[i] - 'a']++;
            i++;
        }
        if(equal(count1,count2)){
            ans.push_back(k);
        }
        k++;

        for(; i<s.length(); i++){
            char new1 = s[i];
            int newindex = new1 - 'a';
            count2[newindex]++;

            char old = s[i - window];
            int oldindex = old - 'a';
            count2[oldindex]--;
            if(equal(count1, count2)){
                ans.push_back(k);
            }
            k++;
        }

        return ans;


    }
};