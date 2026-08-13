class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int, int> freq;

        int s = 0;
        int ans = 0;

        for (int e = 0; e < nums.size(); e++) {
            freq[nums[e]]++;

            while (freq[nums[e]] > k) {
                freq[nums[s]]--;
                s++;
            }

            ans = max(ans, e - s + 1);
        }

        return ans;
    }
};