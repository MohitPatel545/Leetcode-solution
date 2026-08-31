class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minSize = strs[0].length();
        string s = "";
        for(string s: strs) {
            minSize = min(minSize, (int)s.length());
        }
        
        for(int i = 0; i < minSize; i++) {
            char toCheck = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {
                if(strs[j][i] != toCheck) {
                    return s;
                }
            }
            s+=toCheck;
        }
        return s;
    }
};