class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int nums[26] = {0};
        for(char c : s){
            int index = c - 'a';
            arr[index]++;
        }
        for(char ch: t){
            int index = ch - 'a';
            nums[index]++;
        }
        for(int i = 0;i<26; i++){
            if(arr[i] != nums[i]) return false;
        }
        return true;
    }
};