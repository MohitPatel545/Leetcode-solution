class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int sum = 0;
        int maxi = INT_MIN;
        for(int  i = 0; i < nums.size(); i++){
            maxi = max(maxi , nums[i]);
            int mini = INT_MAX;
            for(int j = i;j < nums.size(); j++){
                mini = min(mini , nums[j]);
            }
            sum = maxi - mini;
            mini = INT_MAX;
            if(sum <= k) return i;
        }
        return -1;
    }
};