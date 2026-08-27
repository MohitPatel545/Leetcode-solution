class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int>map;

        for(int i: nums){
            map[i]++;
        }

        for(int i = 0;i<nums.size();i++){
            if(map[nums[i]] > nums.size()/3){
                ans.push_back(nums[i]);
                map[nums[i]] = 0;
            }
        }

        return ans;
    }
};