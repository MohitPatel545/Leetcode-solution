class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            unordered_set<int> count;
            for(int j = i; j < nums.size(); j++){
            count.insert(nums[j]);

            int distnict = count.size();
            
            ans += distnict * distnict;
                
            }
        }

        return ans;
    }
};