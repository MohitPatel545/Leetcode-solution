class Solution {
public:
    int reverseDegree(string s) {
        // unordered_map<char , int> alpha;
        // alpha['z'] = 1;
        // alpha['y'] = 2;
        // alpha['x'] = 3;
        // alpha['w'] = 4;
        // alpha['v'] = 5;
        // alpha['u'] = 6;
        // alpha['t'] = 7;
        // alpha['s'] = 8;
        // alpha['r'] = 9;
        // alpha['q'] = 10;
        // alpha['p'] = 11;
        // alpha['o'] = 12;
        // alpha['n'] = 13;
        // alpha['m'] = 14;
        // alpha['l'] = 15;
        // alpha['k'] = 16;
        // alpha['j'] = 17;
        // alpha['i'] = 18;
        // alpha['h'] = 19;
        // alpha['g'] = 20;
        // alpha['f'] = 21;
        // alpha['e'] = 22;
        // alpha['d'] = 23;
        // alpha['c'] = 24;
        // alpha['b'] = 25;
        // alpha['a'] = 26;
        
    int t = 0;
    for(int i = 1; i <= s.length(); i++){
        int value = 'z' - s[i-1] + 1;
        t += value * i;
    }

    return t;
    }
};