class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini = *min_element(nums1.begin(), nums1.end());

        for(int x : nums1) {
            if(mini % 2 == 0 && x % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};
