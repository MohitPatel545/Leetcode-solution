class Solution {
public:
    long long countCommas(long long n) {
        long long a = n - 999;
        long long t = 0;
        if(a > 0){
            t += a;
            a = n - 999999;
            if(a > 0){
                t += a;
                a = n - 999999999;
                if(a > 0){
                    t += a;
                    a = n - 999999999999;
                    if(a > 0){
                        t += a;
                        a = n - 999999999999999;
                        if(a > 0){
                            t += a;
                        }
                    }
                }
            }
        }
        return t;
    }
};