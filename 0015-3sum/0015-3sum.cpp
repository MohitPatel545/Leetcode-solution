class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        vector<vector<int>> ans;
        for(int i = 0;i<nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int s = i + 1;
            int e = nums.size() - 1;

            while(s < e){
                sum = nums[i] + nums[s] + nums[e];
                if(sum == 0){
                    ans.push_back({nums[i], nums[s],nums[e]});
                    s++;
                    e--;
                    while(s < e && nums[s] == nums[s-1]){
                        s++;
                    }
                    while(s < e && nums[e] == nums[e+1]){
                        e--;
                    }
                }
                else if(sum < 0){
                    s++;
                }
                else{
                    e--;
                }
            }
        }
        return ans;
    }
};