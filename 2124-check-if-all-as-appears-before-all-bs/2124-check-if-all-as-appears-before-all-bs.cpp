class Solution {
public:
    bool checkString(string s) {
        int index = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'b'){
                index = i;
                break;
            }
        }
        if(index == -1)
            return true;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == 'a' && i > index){
                return false;
            }
        }

        return true;
    }
};