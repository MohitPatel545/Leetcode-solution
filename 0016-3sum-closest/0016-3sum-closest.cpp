class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int closestsum = nums[0] + nums[1] + nums[2];

        for(int i = 0; i < n - 2; i++) {

            int s = i + 1;
            int e = n - 1;

            while(s < e) {

                int sum = nums[i] + nums[s] + nums[e];

                if(abs(sum - target) < abs(closestsum - target)) {
                    closestsum = sum;
                }

                if(sum == target) {
                    return sum;
                }

                if(sum < target) {
                    s++;
                }
                else {
                    e--;
                }
            }
        }

        return closestsum;
    }
};