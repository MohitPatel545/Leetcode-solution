class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        set<int> a;

        for (int x : nums) {
            a.insert(x);
        }

        int mn = nums[0];
        int mx = nums[nums.size() - 1];

        for (int i = mn; i <= mx; i++) {
            if (a.find(i) == a.end()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};