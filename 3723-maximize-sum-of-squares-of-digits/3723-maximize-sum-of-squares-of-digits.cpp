class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > (9 * num)){
            return "";
        }
        string answer = "";
        for(int i = 0; i < num; i++){
            int digit = min(sum , 9);
            answer += to_string(digit);
            sum -= digit;
        }

        return answer;
    }
};