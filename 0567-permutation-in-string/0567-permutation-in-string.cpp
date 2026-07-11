class Solution {
public:
    bool checkEqual(int a[26],int b[26]){
        for(int i = 0;i<26;i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return 1;
    }


    bool checkInclusion(string s1, string s2) {
        int count[26] = {0};
        for(int i = 0;i<s1.size();i++){
            int index = s1[i] - 'a';
            count[index]++;
        }

        if (s1.length() > s2.length()) return false;

        int i = 0;
        int windowsize = s1.length();
        int count2[26] = {0};
        while(i < windowsize){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count , count2)){
            return 1;
        }
        while(i < s2.length()){
            char newchar = s2[i];
            int index1 = newchar - 'a';
            count2[index1]++;

            char oldchar = s2[i - windowsize];
            int index2 = oldchar - 'a';
            count2[index2]--;
            i++;

            if(checkEqual(count, count2)){
                return 1;
            }
        }
        return 0;
    }
};