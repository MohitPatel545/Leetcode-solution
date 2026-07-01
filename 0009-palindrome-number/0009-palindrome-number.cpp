class Solution {
public:
    bool isPalindrome(int x) {
        int dup = x;
        int ans = 0;
        if(x<0){
            return false;
        }
        else{
        while(x>0){
            int rem = x%10;
            if (ans > (INT_MAX - rem) / 10) return false;
            ans = ans * 10 + rem;
            x = x/10;
        }
        }
        return ans == dup;
    }
};