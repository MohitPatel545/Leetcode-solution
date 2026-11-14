
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum = 0;
        int mini = INT_MAX;

        for(int i = 0; i < nums.size(); i++) {
            sum = 0;

            for(int j = i; j < nums.size(); j++) {
                sum += nums[j];

                int len = j - i + 1;

                if(len >= l && len <= r && sum > 0) {
                    mini = min(sum, mini);
                }
            }
        }

        if(mini == INT_MAX) {
            return -1;
        }

        return mini;
    }
};
