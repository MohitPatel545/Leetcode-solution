class Solution {
public:

//check palindrome 
    bool checkpalidrom(string a){
        int s = 0;
        int e = a.length() - 1;
        while(s <= e){
            if(a[s++] != a[e--]) return 0;
        }
        return 1;
    }

//converting lower case
    char tolowercase(char m){
        if(m >= 'A' && m <= 'Z'){
            return m - 'A' + 'a';
        }
        return m;
    }
//check charecter is valid or not
    bool valid(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
            return ch;
        }
        return false;
    }


    bool isPalindrome(string s) {
        string temp = "";
        for(int i = 0; i< s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }

        for(int i = 0;i<temp.length();i++){
            temp[i] = tolowercase(temp[i]);
        }

        return checkpalidrom(temp);
    }
};